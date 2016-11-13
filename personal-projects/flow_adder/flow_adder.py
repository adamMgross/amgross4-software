__author__ = 'adam'
from OpenDaylight import OpenDaylight     #TODO fix to make sure import works
from OpenDaylight import OpenDaylightFlow
import sys
import math
import subprocess
import yaml
import network


def is_even(num):
    """ Checks if the given number is even."""

    num = int(num)
    return num % 2 == 0

def is_power_of_two(num):
    """ Checks if the given number is a power of two."""

    num = int(num)
    return ((num & (num - 1)) == 0) and num > 0

def add_vlan_flow():

    params = 'nw_dst=' '****VLAN IP*****' + \
             ',actions=output:' + network.readConfig('vlans', 'switchPort')   #TODO change ****VLAN IP**** to correct field, read from yaml
    args = ['sudo', 'ovs-ofctl', 'add-flow',
            network.readConfig('ovs', 'bridgeName'), params]
    subprocess.call(args)
    print("\nAdded flow:\n" + params)


def generate_hash_flows(single_dst, last_bit=0):
    """ Generates flow rules using the hashing algorithm."""
    
    num_buckets = int(network.readConfig('cluster', 'numHashBits'))
    if is_even(num_buckets):
        src_cut = int(num_buckets/2)
        dst_cut = int(num_buckets/2)
    else:                                                           # determining how many bits will be looked at for src and dst
        src_cut = int(math.floor(num_buckets)/2)
        dst_cut = int(num_buckets - src_cut)

    num_adcs = len(network.readConfig('adcs'))

    total_combinations = int(math.pow(2, num_buckets))
    tracker = [False] * total_combinations                          # setting up a tracker to log which bit combinations have been processed
    route_list = []                                                 # list to contain all results of the hash
    for x in range(0, 256):     # 0 - 255 is all combinations of possible IP addresses
        for y in range(0, 256):
            src_lsb = format(x, '#0' + str(src_cut + 2) + 'b')[-1 * src_cut:]       # getting the end bits of src and dst,
            dst_lsb = format(y, '#0' + str(dst_cut + 2) + 'b')[-1 * dst_cut:]       # +2 necessary for formatting purposes

            combined_dec_val = int(src_lsb + dst_lsb, 2)                            # gets the value of the bits when merged, for tracking
            reversed_combined_dec_val = int(dst_lsb + src_lsb, 2)                   # purposes. Reverse is for when src and dst are flipped 
                                                                                    # upon return
            if tracker[combined_dec_val] is False:
                tracker[combined_dec_val] = True
                tracker[reversed_combined_dec_val] = True
                out_port = network.readConfig('adcs')[total_combinations % num_adcs]    # round robin hash for determining outPort
                total_combinations -= 1
                if single_dst is True:
                    if dst_lsb == format(last_bit, '#0' + str(dst_cut + 2) + 'b')[-1 * dst_cut:]:
                        route_list.append({'src': src_lsb,
                                           'dst': dst_lsb, 'dst-info': out_port,
                                           'num-of-bits': src_cut})
                        if src_lsb is not dst_lsb:                                  # larger if branch for treating case of single dst
                            route_list.append({'src': dst_lsb,                      # can be removed if single dst is not being used
                                               'dst': src_lsb, 'dst-info': out_port,
                                               'num-of-bits': dst_cut})
                else:
                    route_list.append({'src': src_lsb,
                                        'dst': dst_lsb, 'dst-info': out_port,
                                        'num-of-bits': src_cut})
                    if src_lsb is not dst_lsb:
                        route_list.append({'src': dst_lsb,
                                           'dst': src_lsb, 'dst-info': out_port,
                                           'num-of-bits': dst_cut})
    return route_list


def add_hash_flows_shell(route_list):

    count = 0
    print('Adding flows:\n')
    for entry in route_list:
        count += 1
        mask_num = str(int(math.pow(2, entry['num-of-bits']) - 1))                      # formatting params for add flow command
        params = "priority=65535,dl_dst=" + network.readConfig('server', 'macAddr') \
                    + ",ip,nw_src=" + "0.0.0." + str(int(entry['src'], 2)) + '/0.0.0.'+ mask_num \
                    + ",actions=mod_nw_dst:" + str(entry['dst-info']['ip']) \
                    + ",mod_dl_dst:" + str(entry['dst-info']['macAddr']) \
                    + ",output:" + str(entry['dst-info']['switchPort'])


                                                                                                                                        
        args = ["ovs-ofctl", "add-flow", "--strict",  network.readConfig('ovs', 'bridgeName'), params]
        subprocess.call(args)
        print('Added flow: ' + params)
    
    print("\nAdded to switch " + network.readConfig('ovs', 'bridgeName') +
          ": " + str(count) + " total flows.")

def add_hash_flows_odl(route_list):
    """
    odl = OpenDaylight()
    odl.setup['hostname'] = *IP of controller*      # this controller setup may belong
    odl.setup['username'] = 'admin'                 # somewhere else
    odl.setup['password'] = 'admin'

    flow = OpenDaylightFlow(odl)
    node = OpenDaylightNode(odl)

    count = 0
    print('Adding flows:\n')
    for entry in route_list:
        count += 1
        mask_num = str(int(math.pow(2, entry['num-of-bits']) - 1))
        priority = unicode('65335', 'utf-8')
        dl_dst = unicode(network.readConfig('server', 'macAddr'), 'utf-8')
        dl_type = unicode('0x0800', 'utf-8')
        nw_src = unicode('0.0.0.' + str(int(entry['src'],2)) + '/0.0.0.' + mask_num, 'utf-8')
        actions = unicode('mod_nw_dst:' + str(entry['dst-info']['ip']) + \
                'mod_dl_dst:' + str(entry['dst-info']['macAddr']) + \
                'output:' + str(entry['dst-info']['switchPort']), 'utf-8')

        new_flow = {u'actions': actions,         #TODO make sure syntax is correct for actions
                   u'etherType': dl_type,
                   u'installInHw': u'true',
                   u'name': unicode('hash-flow' + str(count), 'utf-8'),
                   u'node': {u'@id': network.readConfig('ovs', 'dpid'), u'@type': u'OF'}, #TODO check format of DPID
                   u'priority': priority
                   u'dlDst': dl_dst
                   u'nwSrc': nw_src}

        # add the flow
        flow.add(new_flow)

    #example of using ODL with curl
    controller> curl -u admin:admin -H 'Content-type: application/json' -X PUT -d
    '{"installInHw":"true",
    "name":"flow1",
    "node": {"id":"00:00:00:00:00:00:00:02", "type":"OF"},
    "ingressPort":"2",
    "etherType": "0x800",
    "protocol": "6",
    "tpDst": "80",
    "priority":"65535",
    "actions":["DROP"]}'
    'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:02/staticFlow/flow1'"""

def generate_route_flows():
    flow_list = []
    flow_list.append(['ovs-vsctl', 'set-fail-mode',                          # sets the switch's fail mode to secure, so it strictly uses
                        network.readConfig('ovs', 'bridgeName'), 'secure'])
    flow_list.append(['ovs-ofctl', 'add-flow', '--strict',
                        network.readConfig('ovs', 'bridgeName'),
                        'priority=65535,dl_type=0x0806,actions=normal'])
    for i in range(1,4):                                    # this is assuming 3 clients; range(1, (#of clients) - 1)
        params = 'priority=65535,ip,nw_src=0.0.12.0/0.0.255.0,nw_dst=10.0.0.' + str(i) + 'actions=' \
            + ',mod_dl_src:' + network.readConfig('server', 'macAddr') \
            + ',output:' + str(i)
        flow_list.append(['ovs-ofctl', 'add-flow', '--strict',
                        network.readConfig('ovs', 'bridgeName'), params])
    return flow_list

def add_route_flows_shell():
    """ Adds flows that faciliate client -> server ping
       in the test topology generated by setup-mn.py through shell."""

    flow_list = generate_route_flows()
    for flow in flow_list:
       subprocess.call(flow)


def add_route_flows_odl():
    """ Adds flows that facilitate client -> server ping
       in the test topology generated by setup-mn.py through ODL."""      #TODO format for ODL

    flow_list = generate_route_flows()
    # add each flow with ODL


def update_flow_table(odl, only_one_dst, last_num=0):
    """ Clears flow table and re-adds route
        flows and hash flows. Parameters are for
        whether there is one server destination, and
        whether to use ODL or not."""

    if odl is True:
        add_route_flows_odl()                                     #TODO delete flows first through ODL
        if only_one_dst is True:
            add_hash_flows_odl(generate_hash_flows(True, last_num))
        add_hash_flows_odl(generate_hash_flows(False))
    else:
        subprocess.call(['sudo', 'ovs-ofctl', 'del-flows', network.readConfig('ovs', 'bridgeName')])
        add_route_flows_shell()
        if only_one_dst is True:
            add_hash_flows_shell(generate_hash_flows(True, last_num))
        add_hash_flows_shell(generate_hash_flows(False))


if __name__ == "__main__":
    """ Control for command line input
        to enable execution of
       "python [filename] [function] [params]"
        where [function] is one of the strings in the
        following if statements, and [params]
        are the appropriate parameters for that function."""

    switch_intf = str(sys.argv[1])
    cmnd = str(sys.argv[2])

    if switch_intf == 'odl':
        if str.find(cmnd, "hash-static") is not -1:
            dst_lsb = int(sys.argv[3])
            add_hash_flows_shell(generate_hash_flows(True, dst_lsb))    #TODO change shell to ODL

        elif str.find(cmnd, "hash") is not -1:
            add_route_flows_shell()
            add_hash_flows_shell(generate_hash_flows(False))

        elif str.find(cmnd, "update") is not -1:
            use_odl = sys.argv[3] == 'odl'
            static_dst = len(sys.argv) > 4
            if static_dst is True:
                last_num = sys.argv[4]
                update_flow_table(use_odl, static_dst, last_num)
            update_flow_table(use_odl, static_dst)


        if len(sys.argv) > 2:
            last_num = int(sys.argv[2])
            update_flow_table(True, last_num)
        else:
            update_flow_table(False)
    
    elif str.find(cmnd, 'vlan') is not -1:
        add_vlan_flow()

    else:
        print("No actions. Rerun with a valid command.\n")
