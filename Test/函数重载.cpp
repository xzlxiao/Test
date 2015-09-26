//
//  函数重载.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/1.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//
//  定义一个重载求和函数,根据用户输入数据类型不同,得到不同的和值输出

#include <stdio.h>
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}

int main()
{
    int num1 = 0, num2 = 0, dich = 0;
    float num3 = 0, num4 = 0;
    cout << "浮点数请输入1, 整型请输入2" << endl;
    while (dich != 1&&2)
    {
        cin >> dich;
        if (dich == 1)
        {
            cout << "请输入数字1" << endl;
            cin >> num3;
            cout << "请输入数字2" << endl;
            cin >> num4;
            cout << num3 << "加" << num4 << "等于" << add(num3, num4);
        }
        else
        {
            if (dich == 2)
            {
                cout << "请输入数字1" << endl;
                cin >> num1;
                cout << "请输入数字2" << endl;
                cin >> num2;
                cout << num1 << "加" << num2 << "等于" << add(num1, num2);
            }
            else
            {
                cout << "请输入正确的数字" << endl;
            }
        }
    }
    return 0;
}