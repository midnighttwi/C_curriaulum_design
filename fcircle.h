
#ifndef FCIRCLE_H
#define FCIRCLE_H

#include"figure.h"


class FCircle:virtual public Figure
{
public:
    FCircle();
    FCircle(QPointF center,double radius,int width=2,FPATTERN pattern=L_FULL,FRGB color={0,0,0},FRGB fill={255,255,255});
    FCircle(FCircle &circle);
    ~FCircle();
    FPATTERN getPat();//获取样式
    void setPat(FPATTERN pattern);//设置型号
    QPointF getCenter()const;//获取圆心
    double getRadius()const;//获取半径
    void setCenter(QPointF point);//设置圆心
    void setRadius(double radius);//设置半径
    FRGB getFillColor();//获取填充颜色
    void setFillColor(FRGB fill);//设置填充颜色
    FRGB getColor();//获取线颜色
    void setColor(FRGB color);//设置线颜色
    FIGURE_TYPE getType();//获取图元类型
    int getWidth();
    void setWidth(int width);

private:
    QPointF center;//圆心
    double radius;//半径
    long datOff;//文件中存储位置
    FRGB fillcolor;//填充颜色
    FIGURE_TYPE type;//图元类型
    int width;
};

#endif // FCIRCLE_H
