# -*- coding: cp936 -*-
# test_1.py

def hello_1(greeting, name):
	print '%s, %s!' % (greeting, name)
	
def hello_2(name, greeting):
	print '%s, %s!' % (greeting, name)

# Ĭ�ϲ������ؼ���
def hello_3(greeting = 'hello', name = 'world'):
	print '%s, %s!' % (greeting, name)
	
def hello_4(name, greeting = 'hello', punctuation = '!'):
	print '%s, %s%s' % (greeting, name, punctuation)
	
# �����
def print_params(*params):
	print params
	return params
	
def print_params_2(title, *params):
	print params
	
# ������ؼ���
def print_params_3(**params):
	print params
	
def print_params_4(x, y, z = 3, *pospar, **keypar):
	print x, y, z
	print pospar
	print keypar