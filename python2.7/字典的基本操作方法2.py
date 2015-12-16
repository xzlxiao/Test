# -*- coding: cp936 -*-
################  字典的基本操作方法2  #################

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

# setdefault
'''
如果字典中含有某键，则获取某键的值，如果不含该键，则新建该键并赋值，默认为None
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
可以用一个字典更新另一个字典
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
item方法将字典所有项以列表方式返回，列表中的每一项都表示为（键，值）对的形式。
'''
print '*' *30
print 'items/iteritems'
d = {'title': 'Python Web Site', 'url': 'http://www.python.org', 'spam': 0}
print d.items()

'''
iteritems返回的是迭代器对象
'''
print d.iteritems()
print list(d.iteritems())

# values/itervalues
'''
将字典的值以列表的形式返回
'''
d = {}
d[1] = 1
d[2] = 2
d[3] = 3
d[4] = 4
print d.values()
