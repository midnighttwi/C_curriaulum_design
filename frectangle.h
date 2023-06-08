
#ifndef FRECTANGLE_H
#define FRECTANGLE_H

#include"figure.h"


class FRectangle:virtual public Figure
{
public:
    FRectangle();
    FRectangle(QPointF ul,QPointF lr,int width=2,FPATTERN pattern=L_FULL,FRGB color={0,0,0},FRGB fill={255,255,255});
    FRectangle(double sx,double sy,double ex,double ey,int width=2,FPATTERN pattern=L_FULL,FRGB color={0,0,0},FRGB fill={255,255,255});
    FRectangle(FRectangle &rectangle);
    ~FRectangle();
    QPointF getUL();//获取左上角点
    QPointF getLR();//获取右下角点
    void setUL(QPointF point);//设置左上角点
    void setLR(QPointF point);//设置右下角点
    FRGB getFillColor();//获取填充颜色
    void setFillColor(FRGB fill);//设置填充颜色
    FRGB getColor();//获取线颜色
    void setColor(FRGB color);//设置线颜色
    FIGURE_TYPE getType();
    FPATTERN getPat();//获取样式
    void setPat(FPATTERN pattern);//设置型号
    int getWidth();
    void setWidth(int width);
private:
    QPointF upperleft;//左上角点
    QPointF lowright;//右下角点
    long datOff;//文本存储位置
    FRGB fillcolor;//填充颜色
    FIGURE_TYPE type;//图元类型
    int width;
};

#endif // FRECTANGLE_H
