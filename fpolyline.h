
#ifndef FPOLYLINE_H
#define FPOLYLINE_H

#include"figure.h"


class FPolyLine:virtual public Figure
{
public:
    FPolyLine(FRGB color={0,0,0});
    ~FPolyLine();
    QVector<QPoint> getVec();
    void append(QPoint point);//增加一个点
    void pop_back();//移除最后一个点
    QPoint at(int i);//访问数组中的点
    void change(int index,QPoint point);//将下标为index处的点改为point
    int getNum();//获取点的数量
    FRGB getColor();//获取线颜色
    void setColor(FRGB color);//设置线颜色
private:
    QVector<QPoint> polyline_point;// 存储多边形的各个点
    int PointNum;//多边形点的数量
    long datOff;
};

#endif // FPOLYLINE_H
