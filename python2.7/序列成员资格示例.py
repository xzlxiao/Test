# -*- coding: cp936 -*-
# ����û�����PIN��
database = [
    ['albert',  '1234'],
    ['dilbert', '4242'],
    ['smith',   '7525'],
    ['jones',   '9843']
    ]

username = raw_input('User name: ')
pin = raw_input('PIN code: ')

if [username, pin] in database:
    print 'Access granted'
