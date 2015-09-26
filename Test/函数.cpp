//
//  函数.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/1.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int num1 = 0;
    int num2 = 0;
    int ans = 0;
    int minus_test(int a, int b);
    cout << "请输入需要相减的两个数字:" << endl;
    cout << "第一个数字:" << endl;
    cin >> num1;
    cout << "第二个数字:" << endl;
    cin >> num2;
    ans = minus_test(num1, num2);
    cout << num1 << "减" << num2 << "等于" << ans;
    return 0;
}

int minus_test(int a, int b)
{
    int c = 0;
    c = a - b;
    return c;
}