# -*- coding: cp936 -*-
################  �ֵ�Ļ�����������2  #################

'''
len(d)      ����d���������
d[k]        ����d�й�����k�ϵ�ֵ
d[k] = v    ��ֵv������k��
del d[k]    ɾ����Ϊk����
k in d	    ���d���Ƿ��м�Ϊk����
'''

'''
clear
copy
fromkeys
get
has_key
items/iteritems
keys/iterkeys
pop
popitem
setdefault
update
values/itervalues
'''

# setdefault
'''
����ֵ��к���ĳ�������ȡĳ����ֵ����������ü������½��ü�����ֵ��Ĭ��ΪNone
'''
print '*' * 30
print 'setdefault'
d = {}
print d
print d.setdefault('name', 'N/A')
print d
d['name'] = 'Gumby'
print d.setdefault('name', 'N/A')

d = {}
print d.setdefault('name')
print d

# update
'''
������һ���ֵ������һ���ֵ�
'''
d = {
    'title': 'Python Web Site',
    'url': 'http://www.python.org',
    'changed': 'Mar 14 22:09:15 MET 2008'
    }
print d
print
x = {'title': 'Python Language Website'}
print x
print
d.update(x)
print d

# items/iteritems
'''
item�������ֵ����������б�ʽ���أ��б��е�ÿһ���ʾΪ������ֵ���Ե���ʽ��
'''
print '*' *30
print 'items/iteritems'
d = {'title': 'Python Web Site', 'url': 'http://www.python.org', 'spam': 0}
print d.items()

'''
iteritems���ص��ǵ���������
'''
print d.iteritems()
print list(d.iteritems())

# values/itervalues
'''
���ֵ��ֵ���б����ʽ����
'''
d = {}
d[1] = 1
d[2] = 2
d[3] = 3
d[4] = 4
print d.values()
