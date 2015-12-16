# -*- coding: cp936 -*-
# 字典

# 建立字典
print '*'*30 + '\n建立字典'
phonebook = {'Alice': '2341', 'Beth': '9102', 'Cecil': '3258'}
print phonebook

# dict函数
'''
该函数通过其他映射（比如其他字典）或者（键，值）对的序列建立字典
'''
print '*'*30 + '\ndict函数'
items = [('name', 'Gumby'), ('age', 42)]
d = dict(items)
print d


################  字典的基本操作方法  #################

'''
len(d)      返回d中项的数量
d[k]        返回d中关联键k上的值
d[k] = v    将值v关联到k上
del d[k]    删除键为k的项
k in d	    检查d中是否有键为k的项
'''

# 自动添加
print '*' * 30
print '自动添加'
x = {}
x[42] = 'Foobar'
print x

##################  字典示例  ####################
# 一个简单的数据库
# 字典使用人名作为键。每个人用另一个字典来表示，其键‘phone’和‘addr’分别表示它们的电话号码和地址
print '*' * 30
print '一个简单的数据库'
print '字典使用人名作为键。每个人用另一个字典来表示，其键‘phone’和‘addr’分别表示它们的电话号码和地址'
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

# 针对电话号码和地址使用的描述性标签，会在打印输出的时候用到
labels = {
    'phone': 'phone number',
    'addr': 'address'
    }

name = raw_input('Name: ')

# 查找电话号码还是地址？
request = raw_input('phone number(p) or address(a)?')

raw_input()

# 使用正确的键：
if request == 'p' : key = 'phone'
if request == 'a' : key = 'addr'

# 如果名字是字典中的有效键才打印信息：
if name in people: print "%s's %s is %s." % \
   (name, labels[key], people[name][key])

raw_input()
