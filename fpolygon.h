
#ifndef FPOLYGON_H
#define FPOLYGON_H

#include"figure.h"


class FPolygon:virtual public Figure
{
public:
    FPolygon(FRGB color={0,0,0},FRGB fill={255,255,255});
    ~FPolygon();
    QVector<QPoint> getVec();
    void append(QPoint point);//增加一个点
    void pop_back();//移除最后一个点
    QPoint at(int i);//访问数组中的点
    int getNum();//获取点的数量
    void change(int index,QPoint point);//将下标为index处的点改为point
    FRGB getFillColor();
    void setFillColor(FRGB fillcolor);
    FRGB getColor();//获取线颜色
    void setColor(FRGB color);//设置线颜色
private:
    QVector<QPoint> poly_point;
    int pointNum;
    long datOff;
    FRGB fillcolor;
};

#endif // FPOLYGON_H
