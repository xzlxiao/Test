# -*- coding: cp936 -*-
# ģ���ַ���
from string import Template
s1 = Template('$x, glorious $x!')
s1.substitute(x = 'slurm')
print s1

# ����滻�ֶ��ǵ��ʵ�һ���֣� ��ô�������ͱ������������������Ӷ�׼ȷָ����β
s2 = Template("It's ${x}tastic!")
s2.substitute(x = 'slurm')
print s2

# ����ʹ��$$������Ԫ����
s3 = Template("Make $$ selling $x!")
s3 = s3.substitute(x = 'slurm')
print s3

# ���˹ؼ��ֲ���֮�⣬������ʹ���ֵ�����ṩֵ/���ƶ�
s4 = Template('A $thing must never $action.')
d = {}
d['thing'] = 'gentleman'
d['action'] = 'show his socks'
s4.substitute(d)
print s4
