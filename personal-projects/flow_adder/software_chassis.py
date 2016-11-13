__author__ = 'adam'
import flow_adder
import sys
import network
import os

""" Incomplete CLI module for
    configuring network and the yaml file """


def find_config_filepath():
    for file in os.listdir(os.getcwd()):
        if file.endswith(".yaml"):
            return file

funcs = {'add' : network.createConfig, 'del': network.destroyConfig, 'update': network.updateConfig, 'get': network.readConfig}
reverse_funcs = dict((v, k) for k, v in funcs.iteritems())
config = network.yamlLoad(find_config_filepath())

def determine_action(command):
    if command in funcs:
        return funcs[command]
    else:
        return -1

def parse_params_add(params):
    if params[0] not in config:
        return -1
    keysAndVals = {}
    for param in params[1:]:
        index_of_equals = str.find(param, '=')
        keysAndVals[param[:index_of_equals]] = param[index_of_equals:]
    network.createConfig(find_config_filepath(),  params[0], keysAndVals)

def parse_params_del(params):
    if params[0] not in config:
        return -1
    if params[1] not in config[params[0]]:
        return -1
    network.destroyConfig(find_config_filepath(), *params)

def parse_params_update(params):
    if params[0] not in config:
        return -1
    if params[1] not in config[params[0]]:
        return -1
    if len(params) > 3:
        network.updateConfig(find_config_filepath(),
                            params[0], params[2], params[3], params[1])
        return
    network.updateConfig(find_config_filepath(),
                         params[0], params[2], params[1])

def parse_params_get(params):
    if params[0] not in config:
        return -1
    if len(params) > 1:
        if params[1] not in config[params[1]]:
            return -1
        if len(params) > 2:
            network.readConfig(find_config_filepath(), params[0], params[2], params[1])
            return
        network.readConfig(find_config_filepath(), params[0], params[2])
        return

def parse_command():

    command = sys.argv[1]
    action = determine_action(command)
    assert action is not -1, 'invalid action'
    assert eval('parse_params_' + command
                + '(' + str(sys.argv[2:]).strip('[]') + ')') is not -1, 'invalid parameters'


    return network.yamlLoad('test.yaml')



if __name__ == "__main__":
    parse_command()

