//
//  输入输出测试.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/18.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
///Users/xiaozhenlong/Desktop/program/C++/test.dat
/*创建一个函数reWrite，通过该函数读取文件内容，并删除文件的原文本，通过参数n实现输出特定文本“n 语句"到二进制文件中*/

void reWrite(char* in, int n)
{
    ifstream ifile;
    ofstream ofile;
    string dir1 = "/Users/xiaozhenlong/Desktop/program/C++/test.dat";
    char input[500];
    char space[2] = {"\n"};
    ifile.open(dir1, ios_base::in);
    if (ifile.is_open())
    {
        ifile.read(input, 500);
        cout << input;
    }
    else
    {
        cout << "there is a error in fileopen";
        ifile.close();
    }
    cout << input << endl;
    ifile.close();
    ofile.open(dir1, ios_base::ate|ios_base::out);
    if (!ofile.is_open())
    {
        cout <<  "there is a error in fileopen2";
        ofile.close();
    }
    try
    {
        for (int i = 0; i <= n; i++)
        {
            //ofile.write(i,2);
            ofile.write(space,2);
            ofile.write(in, 50);
        }
    }
    catch (...)
    {
        
    }
    ofile.close();
}

int main()
{
    char out[50] = "测试";
    void reWrite(char* in, int n);
    reWrite(out, 10);
    return 0;
}


