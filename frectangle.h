
#ifndef FRECTANGLE_H
#define FRECTANGLE_H

#include"figure.h"


class FRectangle:virtual public Figure
{
public:
    FRectangle();
    FRectangle(QPoint ul,QPoint lr,FRGB color={0,0,0},FRGB fill={255,255,255});
    FRectangle(double sx,double sy,double ex,double ey,FRGB color={0,0,0},FRGB fill={255,255,255});
    FRectangle(FRectangle &rectangle);
    ~FRectangle();
    QPoint getUL();//获取左上角点
    QPoint getLR();//获取右下角点
    void setUL(QPoint point);//设置左上角点
    void setLR(QPoint point);//设置右下角点
    FRGB getFillColor();//获取填充颜色
    void setFillColor(FRGB fill);//设置填充颜色
    FRGB getColor();//获取线颜色
    void setColor(FRGB color);//设置线颜色
private:
    QPoint upperleft;//左上角点
    QPoint lowright;//右下角点
    long datOff;//文本存储位置
    FRGB fillcolor;//填充颜色


};

#endif // FRECTANGLE_H
