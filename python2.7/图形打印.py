# -*- coding: cp936 -*-
# ����ȷ�Ŀ���ھ��еġ����ӡ��д�ӡһ������

# ע�⣬���������������//��ֻ����Python2.2�Լ������汾��ʹ��

sentence = raw_input('Sentence: ')

screen_width = 80
text_width = len(sentence)
box_width = text_width + 6
left_margin = (screen_width - box_width)//2

print
print ' ' * left_margin + '+'  + '-' * (box_width-4) +  '+'
print ' ' * left_margin + '| ' + ' ' * text_width    + ' |'
print ' ' * left_margin + '| ' +       sentence      + ' |'
print ' ' * left_margin + '| ' + ' ' * text_width    + ' |'
print ' ' * left_margin + '+'  + '-' * (box_width-4) +  '+'
print
