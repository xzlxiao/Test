# -*- coding: cp936 -*-
# test_point2D.py

_metaclass_ = type
class point2D:
	def _init_(self):
		self.x = 0
		self.y = 0
	
	def setx(self, value):
		self.x = value
		
	def sety(self, value):
		self.y = value
		
	def getPoint(self):
		print {'x': self.x, 'y': self.y}
		

