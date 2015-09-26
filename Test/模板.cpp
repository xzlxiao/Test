//
//  模板.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/11.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//
//  定义两个函数模板，能够进行各类数据的加法算法及除字符串外的减法算法

#include <stdio.h>
#include <iostream>
using namespace std;
//模板的声明
template <class ADD>
ADD add(const ADD a, const ADD b);
template <class SUB>
SUB sub(const SUB a, const SUB b);
int main()
{
    int a = 2, b = 9;
    cout << add(a,b) << endl;
    cout << sub(a,b) << endl;
}
//模板定义
template <class ADD>
ADD add(const ADD a, const ADD b)
{
    return a+b;
}
template <class SUB>
SUB sub(const SUB a, const SUB b)
{
    return a-b;
}