# -*- coding: cp936 -*-
from math import pi
# 字符串格式化输出
a = '%s plus %s equal %s' % (1, 1, 2)
print 'a is ' + a

# 字段宽度和精度
b = '%10f' % pi
print 'b is ' + '\"' + b + '\"'
c = '%10.2f' % pi
print 'c is ' + '\"' + c + '\"'

# 精度
d = '%.2f' % pi
print 'd is ' + '\"' + d + '\"'

# 字符串精度
e = '%.5s' % 'Guido van Rossum'
print 'e is ' + '\"' + e + '\"'

# 元组储存参数
f = '%.*s' % (5, 'Guido van Rossum')
print 'f is ' + '\"' + f + '\"'

# 字符填充
g = '%010.2f' % pi
print 'g is ' + '\"' + g + '\"'

# 左对齐
h = '%-10.2f' % pi
print 'h is ' + '\"' + h + '\"'

# 空格和回车符
i = ('% -5d' % 10) + '\n' + ('% -5d' % -10)
print i
j = ('%-5d' % 10) + '\n' + ('%-5d'% -10)
print j
k = ('%-+5d' % 10) + '\n' + ('%-+5d' % -10)
print k

raw_input()
