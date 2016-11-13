__author__ = 'adam'
import yaml
import os, fnmatch


def find_config_file():
    """ Returns the filepath to the 
        yaml file for the network configuration.
        Assumes that this function is being called
        from the directory in which the yaml file is
        located. Also assumes there is only one file
        with the extension .yaml in that directory."""

    for file in os.listdir('.'):
        if fnmatch.fnmatch(file, '*.yaml'):
            return file
    print 'error finding config file'
    return -1

config_filepath = find_config_file()        # stores the filepath for the yaml file in this global variable


def yamlLoad(filepath=config_filepath):
    """ Returns a dict representing the information
        in the network configuration yaml file."""

    with open(filepath, "r") as file_descriptor:
            data = yaml.load(file_descriptor)
    return data


def yamlDump(data, filepath=config_filepath):
    """ Saves data in a yaml file with the
        given filepath."""

    with open(filepath, "w") as file_descriptor:
            yaml.dump(data, file_descriptor)


def createConfig(attributeType, keysAndVals, filepath=config_filepath):
    """ Adds an entry to the yaml file with
        an attributeType denoting what hardware/object
        it contains information about, and a dict containing
        all of that information."""

    config = yamlLoad(filepath)
    if type(config[attributeType]) is list:
            if readConfig(filepath, attributeType, 'name', name=keysAndVals['name']) == keysAndVals['name']:
                    return 'Configuration with that name already exists'
            config[attributeType].append(keysAndVals)
            yamlDump(filepath, config)
    else:
            print('Cannot create new property of this type')        # Only want to destroy ADCs or VLANs


def readConfig(attributeType, subAttributeType='default', name='default', filepath=config_filepath):
    """ Returns information for a specific query
        into the yaml file. Query can be 1 or 2 levels
        deep into the file, i.e. all information
        for all ADCs or just one ADC can be returned, based
        on the parameters given."""

    config = yamlLoad(filepath)
    info = config[attributeType]
    if name != 'default':
            assert type(info) is list
            info = next((item for item in info
                                     if item['name'] == name), 'not found')
            if info == 'not found':
                    print('not found')
                    return
            if subAttributeType == 'default':
                    return info
            else:
                    return info[subAttributeType]
    if subAttributeType != 'default':
            return config[attributeType][subAttributeType]
    else:
            return config[attributeType]


def updateConfig(attributeType, subAttributeType, value, name='default',filepath=config_filepath):
    """ Updates information for a specific attribute
        in the yaml file. Attribute can be 1 or 2 levels
        deep into the file, i.e. all information
        for all ADCs or just one ADC can be updated, based
        on the parameters given."""
    
    config = yamlLoad(filepath)
    info = config[attributeType]
    if name != 'default':
            assert type(info) is list
            found = False
            index = -1
            for x in range(len(info)):
                    if info[x]['name'] == name:
                            index = x
                            found = True
            if found is True:
                    config[attributeType][index][subAttributeType] = value
            else:
                    print('not found')
    config[attributeType][subAttributeType] = value
    yamlDump(filepath, config)


def destroyConfig(attributeType, name, filepath=config_filepath):
    """ Deletes an entry in the yaml file.
        Assumes that only attributes with the
        potential to have multiple entries can be deleted.
        i.e there are multiple ADCs or multiple VLANs."""

    config = yamlLoad(filepath)
    info = config[attributeType]
    index = None
    if type(info) is list:
            found = False
            index = -1
            for x in range(len(info)):
                    if info[x]['name'] == name:
                            index = x
                            found = True
            if found is True:
                    del config[attributeType][index]
            else:
                    print('not found')
    yamlDump(filepath, config)
