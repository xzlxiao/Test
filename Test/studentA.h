//
//  studentA.h
//  Test
//
//  Created by 肖镇龙 on 15/8/26.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//

#ifndef Test_studentA_h
#define Test_studentA_h


#endif

//定义一个学生类，包括数据成员为年龄、性别、身高、体重、成绩及显示成员函数，最后声明一个该类的对象，调用相应地显示函数输出结果。

#include <iostream>
#include <string>
using namespace std;
enum sexes {male = 1, female = 0};
class studentA
{
private:
    char*name;
    int age;
    sexes sex;
    float Len;
    float weigh;
    int goal;
    unsigned long name_lenth;
public:
    void print() const
    {
        cout << "姓名：" << endl << name << endl ;
        cout << "年龄：" << endl << age << endl;
        if (sex == 1)
        {
            cout << "性别：" << endl << "男" << endl;
        }
        else
        {
            cout << "性别：" << endl << "女" << endl;
        }
        cout << "身高：" << endl << Len << endl;
        cout << "体重：" << endl << weigh << endl;
        cout << "分数：" << endl << goal << endl;
    }
    studentA(char*A, int B, sexes C , float D, float E, int F) //构造函数
    {
        name = new char[strlen(A)+1];
        strcpy(name , A);
        age = B;
        sex = C;
        Len = D;
        weigh = E;
        goal = F;
        name_lenth = name_strlenC();
    }
    static unsigned long name_strlenA(const studentA&A)   //计算姓名的长度
    {
        unsigned long L = 0;
        L = strlen(A.name)+1;
        return L;
    }
    unsigned long name_strlenB()   //计算姓名的长度
    {
        unsigned long L = 0;
        L = strlen(name)+1;
        return L;
    }
    unsigned long name_strlenC()   //计算姓名的长度
    {
        unsigned long L = 0;
        L = strlen(name)+1;
        return L;
    }
    ~studentA() //析构函数
    {
        delete[] name;
        cout << "析构函数被调用";
    }


    
};