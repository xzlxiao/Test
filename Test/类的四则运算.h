//
//  类的四则运算.h
//  Test
//
//  Created by 肖镇龙 on 15/9/3.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//
//  定义一个四则运算类，其对象可以对两个数进行四则运算，最后输出结果

#ifndef __Test__________
#define __Test__________

#include <stdio.h>

#endif /* defined(__Test__________) */

#include <iostream>
using namespace std;
class math_four
{
private:
    float n;
public:
    math_four(float a)
    {
        n = a;
    }
    void print()
    {
        cout << n << endl;
    }
    math_four operator + (const math_four&a);
    math_four operator - (const math_four&a);
    math_four operator * (const math_four&a);
    math_four operator / (const math_four&a);
};

math_four math_four::operator + (const math_four&a)
{
    return n + a.n;
}
math_four math_four::operator - (const math_four&a)
{
    return n - a.n;
}
math_four math_four::operator * (const math_four&a)
{
    return n * a.n;
}
math_four math_four::operator / (const math_four&a)
{
    return n / a.n;
}