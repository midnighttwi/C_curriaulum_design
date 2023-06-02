
#ifndef FSECTOR_H
#define FSECTOR_H

#include "figure.h"



class FSector : virtual public Figure
{
public:
    FSector();
    FSector(QPoint center,QPoint startpoint,QPoint endpoint,double angle,FRGB color={0,0,0},FRGB fill={255,255,255});
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
    FRGB getFillColor();//获取填充颜色
    void setFillColor(FRGB fill);//设置填充颜色
    FRGB getColor();//获取线颜色
    void setColor(FRGB color);//设置线颜色
private:
    QPoint center;//圆心
    QPoint start_point;//起点
    QPoint end_point;//终点
    double angle;//角度
    long datOff;//文件中存储位置
    FRGB fillcolor;//填充颜色
};

#endif // FSECTOR_H
