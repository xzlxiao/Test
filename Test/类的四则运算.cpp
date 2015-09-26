//
//  类的四则运算.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/3.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//

#include "类的四则运算.h"
#include <iostream>
using namespace std;
int main()
{
    math_four A(180);
    math_four B(100);
    math_four C(0);
    C = A + B;
    cout << "A + B = " ;
    C.print();
    C = A - B;
    cout << "A - B = ";
    C.print();
    C = A * B;
    cout << "A * B = ";
    C.print();
    C = A / B;
    cout << "A / B = ";
    C.print();
    
    return 0;
}