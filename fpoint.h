
#ifndef FPOINT_H
#define FPOINT_H

#include "figure.h"



class FPoint : virtual public Figure
{
public:
    FPoint();
    ~FPoint();
    FPoint(double x,double y);
    FPoint(FPoint &point);
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
    int* getColor();//获取线颜色
    void setColor(int R,int G,int B);//设置线颜色
private:
    double x;
    double y;


};

#endif // FPOINT_H
