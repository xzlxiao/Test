# -*- coding: cp936 -*-
################  �ֵ�Ļ�����������  #################

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

# clear
'''
����ֵ��ֵ����������
'''
print '*' * 30 + '\nclear'
d = {}
d['name'] = 'Gumby'
d['age'] = 42
print d
returned_value = d.clear()
print d
print returned_value

x = {}
y = x
x['key'] = 'value'
print y
x = {}
print y

x = {}
y = x
x['key'] = 'value'
print y
x.clear()
print y

# copy
'''
�����ֵ䣬���Ǹ���
'''
print '*' * 30
print 'copy'
x = {
    'username': 'admin',
    'machines': ['foo', 'bar', 'baz']
    }
print x
y = x.copy()
print y
y['username'] = 'mlh'
y['machines'].remove('bar')
print x
print y
'''
���ڸ������滻ֵ��ʱ��ԭʼ�ֵ䲻��Ӱ�죬���ǣ�����޸���ĳ��ֻ��ԭ���޸ģ��������滻����ԭʼ���ֵ�Ҳ��ı䣬��Ϊͬ����ֵҲ�洢��ԭ�ֵ���
����ķ�����ʹ�����
'''
# deepcopy
'''
�����ֵ䣬��ȫ����
'''
print '*' * 30
print 'deepcopy'
from copy import deepcopy
d = {}
d['names'] = ['Alfred', 'Bertrand']
print d
c = d.copy()
dc = deepcopy(d)
d['names'].append('Clive')
print c
print dc

# fromkeys
'''
fromkeys����ʹ�ø����ļ������µ��ֵ䣬ÿ������Ӧһ��Ĭ��ֵNone
'''
print '*' * 30
print 'fromkeys'
print {}.fromkeys(['name', 'age'])
a = {}
b = a.fromkeys(['addr', 'phone'])
print a
print b

print dict.fromkeys(['name', 'age'])
'''
��ʹ��Ĭ��ֵ
'''
print dict.fromkeys(['name', 'age'], '(unknown)')

# get
'''
�����ͼ�����ֵ��в����ڵ���ʱ�������get����, Ĭ�Ϸ���none
'''
print '*' * 30
print 'get'
d = {}
print d.get('name')

'''
�޸ķ��ʲ�����Ԫ�صķ���ֵ
'''
print d.get('name', 'N/A')

d['name'] = 'Eric'
print d.get('name')

#####################  ʹ�÷���ʾ��  ##################
'''
ʹ��get()�ļ����ݿ�
'''
print '*' * 30
print 'ʹ��get()�ļ����ݿ�'
people = {
    'Alice': {
        'phone': '2341',
        'addr': 'Foo drive 23'
        },

    'Beth': {
        'phone': '9102',
        'addr': 'Baz avenue 90'
        }
    }

labels = {
    'phone': 'phone number',
    'addr': 'address'
    }

name = raw_input('Name: ')

# ���ҵ绰���뻹�ǵ�ַ��
request = raw_input('Phone number(p) or address(a)?')

# ʹ����ȷ�ļ�:
key = request # �������Ȳ���'p'Ҳ����'a'
if request == 'p': key = 'phone'
if request == 'a': key = 'addr'

# ʹ��get()�ṩ��Ĭ��ֵ��
person = people.get(name, {})
'''
���������Чֵ����õ����ֵ�
'''
label = labels.get(key, key)
'''
��������key��Ч�� �򷵻�key
'''
result = person.get(key, 'not available')
print "%s's %s is %s." %(name, label, result)

# pop
print '*' * 30
print 'pop'
d = {'x': 1, 'y': 2}
print d.pop('x')
print d

# popitem
'''
��ĳһ˳�򵯳���
'''
print '*' * 30
print 'popitem'
a = {1: 12, 2: 22, 3: 32}
print a;
print a.popitem()
print a

raw_input()
