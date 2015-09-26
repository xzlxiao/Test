//
//  虚基派生.h
//  Test
//
//  Created by 肖镇龙 on 15/9/8.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//
//  用模拟代码来练习虚基派生

#ifndef __Test________
#define __Test________

#include <stdio.h>

#endif /* defined(__Test________) */
#include <iostream>
#include <string>
using namespace std;
//定义一个共同基类
class student
{
protected:
    string name;
    int age;
public:
    student(string a, int b)
    {
        name = a;
        age = b;
    }
};
class classmate:virtual public student
{
protected:
    string relationship;
public:
    classmate(string a, int b, string c):student(a,b)
    {
        relationship = c;
    }
};
class schoolmate:virtual public student
{
protected:
    string _class_;
public:
    schoolmate(string a, int b, string d):student(a,b)
    {
        _class_ = d;
    }
};
class leader:public classmate, schoolmate
{
protected:
    string identity;
public:
    leader(string a, int b, string c, string d, string e):classmate(a,b,c), schoolmate(a,b,d), student(a,b)
    {
        identity = e;
    }
    void print()
    {
        cout << name << ' ' << age << ' ' << relationship << ' ' << _class_ << ' ' << identity << endl;
    }
};