# -*- coding: cp936 -*-
################  字典的基本操作方法  #################

'''
len(d)      返回d中项的数量
d[k]        返回d中关联键k上的值
d[k] = v    将值v关联到k上
del d[k]    删除键为k的项
k in d	    检查d中是否有键为k的项
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
清除字典的值，包括副本
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
复制字典，不是副本
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
当在副本中替换值的时候，原始字典不受影响，但是，如果修改了某个只（原地修改，而不是替换），原始的字典也会改变，因为同样的值也存储在原字典中
避免的方法是使用深复制
'''
# deepcopy
'''
复制字典，完全独立
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
fromkeys方法使用给定的键建立新的字典，每个键对应一个默认值None
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
不使用默认值
'''
print dict.fromkeys(['name', 'age'], '(unknown)')

# get
'''
如果试图访问字典中不存在的项时会出错，但get不会, 默认返回none
'''
print '*' * 30
print 'get'
d = {}
print d.get('name')

'''
修改访问不存在元素的返回值
'''
print d.get('name', 'N/A')

d['name'] = 'Eric'
print d.get('name')

#####################  使用方法示例  ##################
'''
使用get()的简单数据库
'''
print '*' * 30
print '使用get()的简单数据库'
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

# 查找电话号码还是地址？
request = raw_input('Phone number(p) or address(a)?')

# 使用正确的键:
key = request # 如果请求既不是'p'也不是'a'
if request == 'p': key = 'phone'
if request == 'a': key = 'addr'

# 使用get()提供的默认值：
person = people.get(name, {})
'''
如果输入无效值，则得到空字典
'''
label = labels.get(key, key)
'''
如果输入的key无效， 则返回key
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
按某一顺序弹出项
'''
print '*' * 30
print 'popitem'
a = {1: 12, 2: 22, 3: 32}
print a;
print a.popitem()
print a

raw_input()
