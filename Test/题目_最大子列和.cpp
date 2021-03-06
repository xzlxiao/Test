//
//  题目_最大子列和.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/5.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    //确定数组大小
    int K = 0;
    cin >> K;
    int group[K];
    int num = NULL;
    //输入数组元素
    for (int i = 0; i < K; i++)
    {
        cin >> num;
        group[i] = num;
    }
    //求group的最大子列
    void MAXZL(int *gro, int n);
    MAXZL(group, K);
    return 0;
}
void MAXZL(int *gro, int n)
{
    int max_sum = 0;
    int current_sum = 0;
    int max_start = 0;
    int max_end = 0;
    int current_start = 0;
    int current_end = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum += gro[i];
        current_end = i;
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
            max_start = current_start;
            max_end = current_end;
        }
        else if (current_sum <= 0)
        {
            current_sum = 0;
            current_start = i + 1;
            current_end = i + 1;
        }
    }
    for (int i = max_start; i <= max_end; i++)
    {
        cout << gro[i] << " ";
    }
}

