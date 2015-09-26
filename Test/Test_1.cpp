//
//  Test_1.cpp
//  Test
//
//  Created by 肖镇龙 on 15/8/25.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//
//  问题：如何删除申请的数组型动态内存？

#include <stdio.h>
#include <iostream>
void print(char*T)
{
    using std::cout;
    using std::endl;
    cout << "结果是" <<endl;
    cout << T << endl;
}
int main()
{
    char fz[5] = "abcd";
    void print(char*T);
    print(fz);
    char*fz_2 = new char[strlen(fz)];
    strcpy(fz_2, fz);
    print(fz_2);
    delete[] fz_2;
    fz_2 = NULL;
    using std::cout;
    using std::endl;
    cout << fz_2;
    return 0;
}