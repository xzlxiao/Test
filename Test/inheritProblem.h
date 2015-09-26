//
//  inheritProblem.h
//  Test
//
//  Created by 肖镇龙 on 15/8/27.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//

#ifndef __Test__inheritProblem__
#define __Test__inheritProblem__

#include <stdio.h>

#endif /* defined(__Test__inheritProblem__) */

//研究protected/private/public的特点

#include <iostream>
using namespace std;

class A
{
protected:
    int A1;
    int A2;

public:
    void printA1()
    {
        cout << "A1:" << A1 << endl;
    }
    
    void printA2()
    {
        cout << "A2:" << A2 << endl;
    }
    
    A(int L1, int L2)
    {
        A1 = L1;
        A2 = L2;
    }
};

class AA: public A
{

public:
    AA(int L1, int L2): A(L1, L2)
    {
    }
};
