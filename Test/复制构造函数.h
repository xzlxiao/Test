//
//  复制构造函数.h
//  Test
//
//  Created by 肖镇龙 on 15/9/1.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//

#ifndef __Test__________
#define __Test__________

#include <stdio.h>
#include <string>
#include <iostream>

#endif /* defined(__Test__________) */
class student
{
private:
    std::string name;
public:
    student(std::string a)
    {
        name = a;
    }
    student(const student&a)
    {
        name = a.name;
    }
    void print()
    {
        using std::cout; using std::endl;
        cout << this->name << endl;
    }
};
