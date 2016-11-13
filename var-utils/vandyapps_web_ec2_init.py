from subprocess import call
import boto3
import time
import datetime
call('aws ec2 start-instances --instance-ids i-0a31ff99'.split())
ec2 = boto3.resource('ec2').Instance(id='i-0a31ff99')
count = 0
''.
while ec2.state['Name'] != 'running':
    time.sleep(1.5)
    count += 1
    call('clear')
    dots = ''
    for i in range(count):
        dots += '.'
    print '{}: Waiting for ec2 to start up{}'.format(datetime.datetime.now().strftime('%a %b %d, %Y: %X'), dots)
    ec2 = boto3.resource('ec2').Instance(id='i-0a31ff99')
print 'calling {}'.format('ssh -i /Users/adamg/.ssh/unix-sesh-key.pem ubuntu@{}'.format(ec2.public_ip_address).split())
time.sleep(3)
call('ssh -i /Users/adamg/.ssh/unix-sesh-key.pem ubuntu@{}'.format(ec2.public_ip_address).split())
