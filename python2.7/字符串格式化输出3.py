# -*- coding: cp936 -*-
from math import pi
# �ַ�����ʽ�����
a = '%s plus %s equal %s' % (1, 1, 2)
print 'a is ' + a

# �ֶο�Ⱥ;���
b = '%10f' % pi
print 'b is ' + '\"' + b + '\"'
c = '%10.2f' % pi
print 'c is ' + '\"' + c + '\"'

# ����
d = '%.2f' % pi
print 'd is ' + '\"' + d + '\"'

# �ַ�������
e = '%.5s' % 'Guido van Rossum'
print 'e is ' + '\"' + e + '\"'

# Ԫ�鴢�����
f = '%.*s' % (5, 'Guido van Rossum')
print 'f is ' + '\"' + f + '\"'

# �ַ����
g = '%010.2f' % pi
print 'g is ' + '\"' + g + '\"'

# �����
h = '%-10.2f' % pi
print 'h is ' + '\"' + h + '\"'

# �ո�ͻس���
i = ('% -5d' % 10) + '\n' + ('% -5d' % -10)
print i
j = ('%-5d' % 10) + '\n' + ('%-5d'% -10)
print j
k = ('%-+5d' % 10) + '\n' + ('%-+5d' % -10)
print k

raw_input()
