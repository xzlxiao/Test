//
//  共用体.cpp
//  Test
//
//  Created by 肖镇龙 on 15/8/30.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//  定义一个共用体,用于保存学生年级或部门信息,并能根据输入信息的不同选择输出

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    union personalinfo
    {
        int grade;
        char department[20];
    };
    personalinfo stu1;
    int branch = -1;
    
    while (branch != 1)
    {
        cout << "如果你是老师,请输入0;如果你是学生,请输入1:" << endl;
        cin >> branch;
        if (branch == 0)
        {
            cout << "欢迎老师, 请输入您的部门:" << endl;
            cin >> stu1.department;
        }
        else
        {
            if (branch == 1)
            {
                cout << "欢迎同学,请输入您的年级:" << endl;
                cin >> stu1.grade;
            }
            else
            {
                cout << "请输入正确的信息!" << endl;
            }
        }
    }
    
    if (branch == 0)
    {
        cout << "您的部门是:" << stu1.department << endl;
    }
    else
    {
        cout << "您的年级是:" << stu1.grade << endl;
    }
    
    
    return 0;
    
}
