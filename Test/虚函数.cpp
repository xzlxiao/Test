//
//  虚函数.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/11.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//
//  定义一个抽象类，然后将这个类作为基类，再派生两个子类，最后调用其中的虚函数显示输出数据

#include <stdio.h>
#include <iostream>
using namespace std;
class A
{
public:
    virtual void print()
    {
        cout << "This is A" << endl;
    }
};
class B :public A
{
public:
    virtual void print()
    {
        cout << "This is B" << endl;
    }
};
class C :public A
{
public:
    virtual void print()
    {
        cout << "This is C" << endl;
    }
};
int main()
{
    A *pA;
    A ojA;
    B ojB;
    C ojC;
    pA = &ojA;
    pA->print();
    pA = &ojB;
    pA->print();
    pA = &ojC;
    pA->print();
    return 0;
}