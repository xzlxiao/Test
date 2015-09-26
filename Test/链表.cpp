//
//  链表.cpp
//  Test
//
//  Created by 肖镇龙 on 15/8/31.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//
//  建立一个学生信息链表,接受用户输入信息,然后根据用户需要查询数据输出结果

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    struct student
    {
        string name;
        int age;
        student*next;
    };
    student stu1, stu2, stu3, stu4, stu5;
    stu1 = {"AA", 16, &stu2};
    stu2 = {"AB", 13, &stu3};
    stu3 = {"AC", 18, &stu4};
    stu4 = {"AD", 14, &stu5};
    stu5 = {"AE", 18, NULL};
    student*head = &stu1;
    student*pointer = head;
    string searcher;
    cin >> searcher;
    int marker =-1;
    while (pointer != NULL)
    {
        if ((*pointer).name.compare(searcher)==0)
        {
            cout << (*pointer).name << ":" << (*pointer).age << endl;
            pointer = (*pointer).next;
            marker = 1;
        }
        else
        {
            pointer = (*pointer).next;
        }
    }
    if (marker == -1)
    {
        cout << "未找到搜索结果" << endl;
    }

    return 0;
}
