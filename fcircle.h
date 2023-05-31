
#ifndef FCIRCLE_H
#define FCIRCLE_H

#include"figure.h"


class FCircle:virtual public Figure
{
public:
    FCircle();
    FCircle(QPoint center,double radius);
    FCircle(FCircle &circle);
    ~FCircle();
    QPoint getCenter();//获取圆心
    double getRadius();//获取半径
    void setCenter(QPoint point);//设置圆心
    void setRadius(double radius);//设置半径
    int getFillColor();//获取填充颜色
    void setFillColor();//设置填充颜色
private:
    QPoint center;//圆心
    double radius;//半径
    long datOff;//文件中存储位置
    int fillcolor[3];//填充颜色
};

#endif // FCIRCLE_H
