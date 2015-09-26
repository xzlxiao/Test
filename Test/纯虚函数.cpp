//
//  纯虚函数.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/11.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//
//  定义一个抽象类Point，其中包括一个纯虚函数getArea(),然后再派生两个子类CRect和CTrigon，最后在主函数中初始化并调用该纯虚函数并输出结果

#include <stdio.h>
#include <iostream>
using namespace std;
class Point
{
public:
    Point(){}
    virtual void getArea() = 0;
};
class CRect:public Point
{
protected:
    double width;
    double heigh;
public:
    CRect(double w, double h):Point()
    {
        width = w;
        heigh = h;
    }
    virtual void getArea()
    {
        double area = width*heigh;
        cout << area << endl;
    }
};
class CTrigon:public Point
{
protected:
    double width;
    double heigh;
public:
    CTrigon(double w, double h):Point()
    {
        width = w;
        heigh = h;
    }
    virtual void getArea()
    {
        double area = width*heigh/2;
        cout << area << endl;
    }
};
int main()
{
    Point *pGragh;
    CRect objCRect(10, 10);
    CTrigon objCTrigon(10, 10);
    pGragh = &objCRect;
    objCRect.getArea();
    pGragh->getArea();
    pGragh = &objCTrigon;
    objCTrigon.getArea();
    pGragh->getArea();
}