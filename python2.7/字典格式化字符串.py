# -*- coding: cp936 -*-
# 字典格式化字符串
phonebook = {
    'Beth': '9102',
    'Alice': '2341',
    'Cecil': '3258'
    }
print phonebook

print "Cecil's phone number is %(Cecil)s." % phonebook

raw_input()