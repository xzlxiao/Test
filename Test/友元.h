//
//  友元.h
//  Test
//
//  Created by 肖镇龙 on 15/9/3.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//
//  定义一个学生类，数据成员包括姓名、年龄、身高和成绩并定义一个现实结果的友元函数，最后声明一个该类的对象，调用相应地显示函数输出结果。

#ifndef __Test______
#define __Test______

#include <stdio.h>

#endif /* defined(__Test______) */

#include <iostream>
using namespace std;
class student
{
private:
    char*name;
    int age;
    float height;
    float score;
    friend void print(const student&a);
public:
    student(char*tmp_name, int tmp_age, float tmp_height, float tmp_score)
    {
        name = new char[strlen(tmp_name)+1];
        strcpy(name, tmp_name);
        age = tmp_age;
        height = tmp_height;
        score = tmp_score;
    }
    
    
};