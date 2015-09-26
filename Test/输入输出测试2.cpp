//
//  输入输出测试2.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/21.
//  Copyright © 2015年 肖镇龙. All rights reserved.
//

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
///Users/xiaozhenlong/Desktop/program/C++/test.dat
///Users/xiaozhenlong/Desktop/program/C++
int main()
{
    ofstream ofile;
    ofile.open("Users/xiaozhenlong/Desktop/program/C++/test.dat", ios_base::out|ios_base::app|ios_base::binary);
    ofile.write("This is a test!", 50);
    ofile.close();
    return 0;
}