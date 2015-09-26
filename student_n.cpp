//
//  student_n.cpp
//  Test
//
//  Created by 肖镇龙 on 15/8/26.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//

#include "studentA.h"
#include <iostream>
using namespace std;
int main()
{
    studentA stu1("学生A", 19, male ,175,90, 84 );
    stu1.print();
    cout << "姓名的长度A：" << studentA::name_strlenA(stu1) << endl;
    cout << "姓名的长度B：" << stu1.name_strlenB() << endl;
    cout << "\"学生\"的长度：" << strlen("学生") << endl;
    cout << "\"学\"的长度：" << strlen("学") << endl;
    cout << "\"学生大刘\"的长度：" << strlen("学生大刘") << endl;

}

