# -*- coding: cp936 -*-
# �ַ�������

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
# ֻ�ṩ��ʼλ��
print 'subject.find(\'$$$\', 1): %s' % subject.find('$$$', 1)
print 'subject.find(\'!!!\'): %s' % subject.find('!!!')
# �ṩ��ʼλ��ͽ�����
print 'subject.find(\'!!!\', 0, 16): %s' % subject.find('!!!', 0, 16)

#################################################
'''
join
'''
seq = ['1', '2', '3', '4', '5']
sep = '+'
print '\n\njoin����'
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
print '\n\ntitle/capword����'
print c.title()
import string
print string.capwords(c)

##################################################
'''
replace
'''
print '\n\nreplace����'
print 'This is a test'
print 'This is a test'.replace('is', 'eez')


##################################################
'''
split
'''
print '\n\nsplit'
print '1=2=3=4=5=6=7'
print '1=2=3=4=5=6=7'.split('=')

##################################################
'''
strip ȥ�����߿ո�
'''
print '\n\nstrip'
print '         internal whiterspace is kept        '
print '         internal whiterspace is kept        '.strip()

##################################################
'''
translate �����滻�ַ����е�ĳЩ���֣�ֻ�ܴ������ַ�������Щʱ���replaceЧ�ʸߵö�
'''

print '\n\ntranslate'
from string import maketrans
table = maketrans('cs', 'kz')    # ��һ�������Խ�ASCII�е�һЩ�ַ��滻����һЩ�ַ�������ASCII��������
print len(table)
print table[97:123]
print maketrans('', '')[97:123]
print 'this is an incredible test'
print 'this is an incredible test'.translate(table)
print 'this is an incredible test'.translate(table, ' ') # �ڶ���������ɾ��ָ���ַ�
