# -*- coding: cp936 -*-
# 模板字符串
from string import Template
s1 = Template('$x, glorious $x!')
s1.substitute(x = 'slurm')
print s1

# 如果替换字段是单词的一部分， 那么参数名就必须用括号括起来，从而准确指明结尾
s2 = Template("It's ${x}tastic!")
s2.substitute(x = 'slurm')
print s2

# 可以使用$$插入美元符号
s3 = Template("Make $$ selling $x!")
s3 = s3.substitute(x = 'slurm')
print s3

# 除了关键字参数之外，还可以使用字典变量提供值/名称对
s4 = Template('A $thing must never $action.')
d = {}
d['thing'] = 'gentleman'
d['action'] = 'show his socks'
s4.substitute(d)
print s4
