#!/usr/bin/python
import sys
sys.path.append('/home/mininet/flow_adder')

import network
from mininet.topo import Topo
from mininet.net import Mininet
from mininet.util import dumpNodeConnections
from mininet.net import Mininet
from mininet.node import Controller, RemoteController, OVSController
from mininet.node import CPULimitedHost, Host
from mininet.node import OVSKernelSwitch
from mininet.node import IVSSwitch
from mininet.cli import CLI
from mininet.log import setLogLevel, info
from mininet.link import TCLink, Intf

def MyNetwork():
    net= Mininet(topo=None, build=False , ipBase='10.0.0.0/8' , link=TCLink)

    info("****Adding ODL Controller:\n")

    config_file = network.config_filepath
    odl = net.addController(name='odl',
                            controller = RemoteController,
                            ip='127.0.0.1',                     #TODO this IP needs to be the IP of the controller
                            port=6633)                          # otherwise remove altogether and default controller will be made

    switch = net.addSwitch(network.readConfig('ovs', 'bridgeName'), dpid=network.readConfig('ovs', 'dpid')) # adds switch with name and DPID
                                                                                                            # corresponding to yaml config
    client1 = net.addHost('client1', ip='10.0.0.1')     # adds 3 clients
    net.addLink(client1, switch)
    client2 = net.addHost('client2', ip='10.0.0.2')
    net.addLink(client2, switch)
    client3= net.addHost('client3', ip='10.0.0.3')
    net.addLink(client3, switch)
    server = net.addHost('server', ip=network.readConfig('server', 'ip'), mac=network.readConfig('server', 'macAddr')) 
                                                            # adds server with IP and MAC corresponding to yaml config
    net.addLink(server, switch)

    for adc in network.yamlLoad(network.find_config_file())['adcs']:               # adds ADCs corresponding to yaml config 
            new_adc = net.addHost(adc['name'], ip=adc['ip'], mac=adc['macAddr'])
            net.addLink(new_adc, switch)

    net.build()

    for controller in net.controllers:
        controller.start()

    net.get(network.readConfig('ovs', 'bridgeName')).start([odl])

    CLI(net)
    net.stop()

if __name__ == '__main__':
    setLogLevel('info')
    MyNetwork()
