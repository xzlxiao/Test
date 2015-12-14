# -*- coding: cp936 -*-
# 字符串方法

#################################################
'''
find
'''
a = 'With a moo-moo here. and a moo-moo there'.find('moo')
print 'a:  %s' % a

title = 'Monty Python\'s Flying Circus'
print title
print 'title.find(\'Monty\'): %s' % title.find('Monty')
print 'title.find(\'Python\'): %s' % title.find('Python')
print 'title.find(\'Flying\'): %s' % title.find('Flying')
print 'title.find(\'Zirquss\'): %s' % title.find('Zirquss')

subject = '$$$ Get rich now!!! $$$'
print subject
print 'subject.find(\'$$$\'): %s' % subject.find('$$$')
# 只提供起始位点
print 'subject.find(\'$$$\', 1): %s' % subject.find('$$$', 1)
print 'subject.find(\'!!!\'): %s' % subject.find('!!!')
# 提供起始位点和结束点
print 'subject.find(\'!!!\', 0, 16): %s' % subject.find('!!!', 0, 16)

#################################################
'''
join
'''
seq = ['1', '2', '3', '4', '5']
sep = '+'
print '\n\njoin方法'
print sep.join(seq)
print '/'.join(seq)
print '\\'.join(seq)

#################################################
'''
lower
'''
b = 'How Are You Today?'
print b.lower()
print 'WHAT\'S YOUR PROBLEM?'.lower()

##################################################
'''
title/capword
'''

b = 'How Are You Today?'
c = b.lower()
print '\n\ntitle/capword方法'
print c.title()
import string
print string.capwords(c)

##################################################
'''
replace
'''
print '\n\nreplace方法'
print 'This is a test'
print 'This is a test'.replace('is', 'eez')
