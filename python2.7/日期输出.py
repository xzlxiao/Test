# -*- coding: cp936 -*-
# ���ݸ�������������������ʽ��ӡ������
months = [
    'January',
    'Feburary',
    'March',
    'April',
    'May',
    'June',
    'July',
    'August',
    'September',
    'october',
    'November',
    'December'
    ]

# ��1~31��������Ϊ��β���б�
endings = ['st', 'nd', 'rd'] + 17 * ['th']\
          + ['st', 'nd', 'rd'] + 7 *['th']\
          + ['st']

year    = raw_input('Year: ')
month   = raw_input('Month: ')
day     = raw_input('Day: ')

month_number = int(month)
day_number = int(day)

# �ǵ�Ҫ���·ݺ�������1���Ի����ȷ������
month_name = months[month_number - 1]
ordinal = day + endings[day_number - 1]

print month_name + ' ' + ordinal + '. ' + year
