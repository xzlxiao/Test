//
//  读取文件.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/16.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//
//  根据用户输入的文件名和路径，读取指定的文本文件内容并显示出来

#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char filename[FILENAME_MAX] = {0};
    char str[FILENAME_MAX] = {0};
    cout << "请输入文件名及路径" << endl;
    cin >> filename;
    ifstream in(filename);  //常见ifstream流in，以便从文件中读取信息
    if (!in.is_open())
    {
        cout << "文件打开失败" << endl;
    }
    while (!in.eof())
    {
        in.read(str, FILENAME_MAX - 1);
        cout << str << endl;
        memset(str, 0 , FILENAME_MAX);
    }
    in.close();
    return 0;
}