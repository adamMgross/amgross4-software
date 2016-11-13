import boto3

ec2 = boto3.resource('ec2')
my_instance = ec2.Instance(id='i-2e8b0a81')
print my_instance.public_ip_address
