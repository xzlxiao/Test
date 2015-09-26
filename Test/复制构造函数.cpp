//
//  复制构造函数.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/1.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//

#include "复制构造函数.h"
#include <iostream>
using namespace std;
int main()
{
    student stu1("小明");
    student stu2(stu1);
    stu1.print();
    stu2.print();
    return 0;
    
}