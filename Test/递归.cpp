//
//  递归.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/1.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    clock_t start, finish;
    double totaltime;
    start = clock();
    void printN1(int);
    void printN2(int);
    int num = 0;
    int dich = 0;
    cin >> dich;
    if (dich == 1)
    {
        cin >> num;
        printN1(num);
    }
    else
    {
        if (dich == 2)
        {
            cin >> num;
            printN2(num);
        }
        else
            return 0;
    }
    finish = clock();
    totaltime = (double)(finish - start)/CLOCKS_PER_SEC;
    cout << "此程序耗时为:" << (totaltime*6) << "秒" << endl;
    return 0;
}

void printN1(int N)
{
    int i=0;
    for (i = 1; i<=N; i++)
    {
        cout << i <<endl;
    }
}

void printN2(int N)
{
    if (N)
    {
        printN2(N-1);
        cout << N << endl;
    }
}