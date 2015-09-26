//
//  函数指针求菲波拉其数列.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/1.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//  定义一个函数指针,求菲薄拉起数列的前20个数据,并将结果保存在数组中,最后输出
//  斐波拉契数列,数字等于前两个数字之和

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int (*pfb)(int a);
    int num_fb(int a);
    pfb = num_fb;
    int array[20];
    for (int i = 0; i < 20; i++)
    {
        array[i] = pfb(i);
    }
    for (int i = 0; i < 20 ; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}

int num_fb(int a)
{
    if (a < 1)
    {
        return 0;
    }
    else
    {
        if (a == 1)
            return 1;
        else
            return (num_fb(a-1) + num_fb(a-2));

    }
}
