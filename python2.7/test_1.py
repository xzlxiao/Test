# -*- coding: cp936 -*-
# test_1.py

def hello_1(greeting, name):
	print '%s, %s!' % (greeting, name)
	
def hello_2(name, greeting):
	print '%s, %s!' % (greeting, name)

# 默认参数及关键字
def hello_3(greeting = 'hello', name = 'world'):
	print '%s, %s!' % (greeting, name)
	
def hello_4(name, greeting = 'hello', punctuation = '!'):
	print '%s, %s%s' % (greeting, name, punctuation)
	
# 多参数
def print_params(*params):
	print params
	return params
	
def print_params_2(title, *params):
	print params
	
# 多参数关键字
def print_params_3(**params):
	print params
	
def print_params_4(x, y, z = 3, *pospar, **keypar):
	print x, y, z
	print pospar
	print keypar