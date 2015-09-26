//
//  友元.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/3.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//

#include "友元.h"
#include <iostream>
using namespace std;
void print(const student&a)
{
    cout << a.name << " is " << a.age << " years old," << " and he/she is " << a.height << " cm. " << "His/Her score is " << a.score << "." << endl;
}

int main()
{
    void print(const student&a);
    student stu1("小明", 17, 170, 95);
    print(stu1);
    return 0;
}