//
//  函数指针函数求差.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/1.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//  定义一个函数指针,实现两个整型数据的求差运算

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int (*p)(int a, int b);
    int sub(int a, int b);
    p = sub;
    int num1 = 0 , num2 = 0;
    cout << "请输入两个数字" << endl;
    cin >> num1 >> num2;
    cout << p(num1,num2) << endl;
    return 0;
}
int sub(int a, int b)
{
    return a - b;
}