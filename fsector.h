
#ifndef FSECTOR_H
#define FSECTOR_H

#include "figure.h"



class FSector : virtual public Figure
{
public:
    FSector();
    FSector(QPoint center,QPoint startpoint,QPoint endpoint,double angle);
    FSector(FSector &sector);
    ~FSector();
    QPoint getCenter();
    QPoint getStart();
    QPoint getEnd();
    double getAngle();
    void setCenter(QPoint point);//
    void setStart(QPoint point);
    void setEnd(QPoint point);
    void setAngle(double angle);
    int getFillColor();
    void setFillColor(int R,int G,int B);

private:
    QPoint center;//圆心
    QPoint start_point;//起点
    QPoint end_point;//终点
    double angle;//角度
    long datOff;//文件中存储位置
    int* fillcolor=new int(3);//填充颜色
};

#endif // FSECTOR_H
