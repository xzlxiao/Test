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
	
# point2D��
_metaclass_ = type
class point2D:
	def __init__(self):
		self.x = 0
		self.y = 0
	
	def setx(self, value):
		self.x = value
		
	def sety(self, value):
		self.y = value
		
	def getPoint(self):
		return {'x': self.x, 'y': self.y}
		
# �����
_metaclass_ = type
class Person:

	def setName(self, name):
		self.name = name
		
	def getName(self):
		return self.name
		
	def greet(self):
		print "Hello, world! I'm. %s." % self.name
		
# ˽�з�������
_metaclass_ = type
class point3D(point2D):
	def __init__(self):
		point2D.__init__(self)
		self.z = 12
	def getPoint(self):
		a = point2D.getPoint(self)
		a['z'] = self.z
		print a
		
# �쳣����
def exp1():
	try:
		x = input('Enter the first number:')
		y = input('Enter the second number:')
		print x/y 
	except ZeroDivisionError:
		print 'The second number can\'t be zero!'
	
# �쳣���ο��ػ���
_metaclass_ = type 
class MuffledCalculator:
	muffled = False
	def calc(self, expr):
		try: 
			return eval(expr)
		except ZeroDivisionError:
			if self.muffled:
				print 'Division by zero is illegal'
			else:
				raise 
				
# ��׽�쳣
def exp2():
	try:
		x = input('Enter the first number:')
		y = input('Enter the second number:')
		
		print x/y
	except(ZeroDivisionError, TypeError), e:
		print e 
		
def exp3():
	try:
		x = input('Enter the first number:')
		y = input('Enter the second number:')
		
		print x/y
	except Exception, e:
		print e 
		
def exp4():
	try:
		x = input('Enter the first number:')
		y = input('Enter the second number:')
		
		print x/y
	except e:
		print e 
		
def exp5():
	try:
		x = input('Enter the first number:')
		y = input('Enter the second number:')
		
		print x/y
	except:
		print 'Something wrong happened...'
		
def exp6():
	try:
		print 'A simple task'
	except:
		print 'What? Something went wrong?'
	else:
		print 'Ah... It went as planned.'
		
def exp7():
	while True:
		try:
			x = input('Enter the first number:')
			y = input('Enter the second number:')
			value = x/y 
			print 'x/y is ', value
		except:
			print 'Invalid input. Please try again.'
		else:
			break
			
def exp8():
	while True:
		try:
			x = input('Enter the first number:')
			y = input('Enter the second number:')
			value = x/y 
			print 'x/y is ', value
		except Exception, e:
			print 'Invalid input: ', e, '\n', 'Please try again.'
		else:
			break
			
# ���ó���Ĺ��췽��
_metaclass_ = type
class Bird(object):
	def __init__(self):
		self.hungry = True
	def eat(self):
		if self.hungry:
			print 'Aaaah...'
			self.hungry = False
		else:
			print 'No, thanks!'
			
class SongBird(Bird):
	def __init__(self):
		Bird.__init__(self)
		self.sound = 'Squawk!'
	def sing(self):
		print self.sound

_metaclass_ = type
class SongBird2(Bird):
	def __init__(self):
		super(SongBird2, self).__init__()
		self.sound = 'Squawk!'
	def sing(self):
		print self.sound
		
def checkIndex(key):
	'''
	�����ļ����ܽ��ܵ�������
	Ϊ���ܱ����ܣ���Ӧ����һ���Ǹ������������������һ��������������TypeError;���
	���Ǹ������������IndexError
	'''
	if not isinstance(key, (int, long)):raise TypeError
	if key < 0: raise IndexError
	
class ArithmeticSequence:
	def __init__(self, start = 0, step = 1):
		'''
		��ʼ����������
		
		��ʼֵ���������еĵ�һ��ֵ
		����������������ֵ֮��Ĳ��
		�ı䡪���û��޸ĵ�ֵ���ֵ�
		'''
		self.start = start
		self.step = step 
		self.changed = {} 
		
	def __getitem__(self, key):
		checkIndex(key)
		try: return self.changed[key]
		except KeyError:
			return self.start + key*self.step
			
	def __setitem__(self, key, value):
		checkIndex(key)
		self.changed[key] = value
		
class CounterList(list):
	def __init__(self, *args):
		super(CounterList, self).__init__(*args)
		self.counter = 0
	def __getitem__(self, index):
		self.counter += 1
		return super(CounterList, self).__getitem__(index)

class Rectangle:
	# ��Ԫ������ķ�ʽ��ֵ
	def __init__(self):
		self.width = 0
		self.height = 0
	def setSize(self, size):
		self.width, self.height = size 
	def getSize(self):
		return self.width, self.height 
		
class Rectangle2:
	# property����
	def __init__(self):
		self.width = 0
		self.height = 0
	def setSize(self, size):
		self.witdth, self.height = size 
	def getSize(self):
		return self.width, self.height 
	size = property(getSize, setSize) 
	
