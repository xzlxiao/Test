# -*- coding: cp936 -*-
# �ֵ�

# �����ֵ�
print '*'*30 + '\n�����ֵ�'
phonebook = {'Alice': '2341', 'Beth': '9102', 'Cecil': '3258'}
print phonebook

# dict����
'''
�ú���ͨ������ӳ�䣨���������ֵ䣩���ߣ�����ֵ���Ե����н����ֵ�
'''
print '*'*30 + '\ndict����'
items = [('name', 'Gumby'), ('age', 42)]
d = dict(items)
print d


################  �ֵ�Ļ�����������  #################

'''
len(d)      ����d���������
d[k]        ����d�й�����k�ϵ�ֵ
d[k] = v    ��ֵv������k��
del d[k]    ɾ����Ϊk����
k in d	    ���d���Ƿ��м�Ϊk����
'''

# �Զ����
print '*' * 30
print '�Զ����'
x = {}
x[42] = 'Foobar'
print x

##################  �ֵ�ʾ��  ####################
# һ���򵥵����ݿ�
# �ֵ�ʹ��������Ϊ����ÿ��������һ���ֵ�����ʾ�������phone���͡�addr���ֱ��ʾ���ǵĵ绰����͵�ַ
print '*' * 30
print 'һ���򵥵����ݿ�'
print '�ֵ�ʹ��������Ϊ����ÿ��������һ���ֵ�����ʾ�������phone���͡�addr���ֱ��ʾ���ǵĵ绰����͵�ַ'
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

# ��Ե绰����͵�ַʹ�õ������Ա�ǩ�����ڴ�ӡ�����ʱ���õ�
labels = {
    'phone': 'phone number',
    'addr': 'address'
    }

name = raw_input('Name: ')

# ���ҵ绰���뻹�ǵ�ַ��
request = raw_input('phone number(p) or address(a)?')

raw_input()

# ʹ����ȷ�ļ���
if request == 'p' : key = 'phone'
if request == 'a' : key = 'addr'

# ����������ֵ��е���Ч���Ŵ�ӡ��Ϣ��
if name in people: print "%s's %s is %s." % \
   (name, labels[key], people[name][key])

raw_input()
