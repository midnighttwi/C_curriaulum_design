
#ifndef FPOINT_H
#define FPOINT_H

#include "figure.h"



class FPoint : virtual public Figure
{
public:
    FPoint();
    ~FPoint();
    FPoint(double x,double y,int size=5,FPATTERN pattern=P_CIRCLE, FRGB color={0,0,0});
    FPoint(FPoint &point);
    double getX();
    double getY();
    FPATTERN getPat();//获取样式
    void setPat(FPATTERN pattern);//设置型号
    void setX(double x);
    void setY(double y);
    FRGB getColor();//获取颜色
    void setColor(FRGB color);//设置颜色
    FIGURE_TYPE getType();
    int getSize();//获得点大小
    void setSize(int size);//设置点大小
    void setFillColor(FRGB fillcolor);//重写，空函数
    FRGB getFillColor();//重写，空函数
private:
    double x;
    double y;
    FIGURE_TYPE type;//图元类型
    int size;//点的大小

};

#endif // FPOINT_H
