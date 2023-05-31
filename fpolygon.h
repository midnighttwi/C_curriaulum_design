
#ifndef FPOLYGON_H
#define FPOLYGON_H

#include"figure.h"


class FPolygon:virtual public Figure
{
public:
    FPolygon();
    ~FPolygon();
    QVector<QPoint> getVec();
    int getNum();
    void setNum(int num);
    int* getFillColor();
    void setFillColor(int R,int G,int B);
    int* getColor();//获取线颜色
    void setColor(int R,int G,int B);//设置线颜色
private:
    QVector<QPoint> polyline_point;
    int pointNum;
    long datOff;
    int *fillcolor=new int(3);
};

#endif // FPOLYGON_H
