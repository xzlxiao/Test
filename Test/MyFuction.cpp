//
//  MyFuction.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/5.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//

#include "MyFuction.h"




//数组输出函数
//AD, BD, CD分别为数组的一维，二维，三维
void print_matrix(int *matrix, int AD = 0, int BD = 0, int CD = 0)
{
    for (int i = 0; i <= CD; i++)
    {
        cout << "[" << i << "]" << " ";
        for (int j = 0; i <= BD; j++)
        {
            cout << "[" << j << "]" << endl;
            for (int k = 0; k <= AD; k++)
            {
                cout << matrix[k][j][i] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}