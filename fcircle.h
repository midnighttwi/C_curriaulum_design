
#ifndef FCIRCLE_H
#define FCIRCLE_H

#include"figure.h"


class FCircle:virtual public Figure
{
public:
    FCircle();
    FCircle(QPoint center,double radius,FRGB color={0,0,0},FRGB fill={255,255,255});
    FCircle(FCircle &circle);
    ~FCircle();
    QPoint getCenter();//获取圆心
    double getRadius();//获取半径
    void setCenter(QPoint point);//设置圆心
    void setRadius(double radius);//设置半径
    FRGB getFillColor();//获取填充颜色
    void setFillColor(FRGB fill);//设置填充颜色
    FRGB getColor();//获取线颜色
    void setColor(FRGB color);//设置线颜色
private:
    QPoint center;//圆心
    double radius;//半径
    long datOff;//文件中存储位置
    FRGB fillcolor;//填充颜色
};

#endif // FCIRCLE_H
