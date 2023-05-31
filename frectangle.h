
#ifndef FRECTANGLE_H
#define FRECTANGLE_H

#include"figure.h"


class FRectangle:virtual public Figure
{
public:
    FRectangle();
    FRectangle(QPoint ul,QPoint lr);
    FRectangle(double sx,double sy,double ex,double dy);
    FRectangle(FRectangle &rectangle);
    ~FRectangle();
    QPoint getUL();//获取左上角点
    QPoint getLR();//获取右下角点
    void setUL(QPoint point);//设置左上角点
    void setLR(QPoint point);//设置右下角点
    int getFillColor();//获取填充颜色
    void setFillColor(int R,int G,int B);//设置填充颜色

private:
    QPoint upperleft;//左上角点
    QPoint lowright;//右下角点
    long datOff;//文本存储位置
    int* fillcolor=new int(3);//填充颜色


};

#endif // FRECTANGLE_H
