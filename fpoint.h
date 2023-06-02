
#ifndef FPOINT_H
#define FPOINT_H

#include "figure.h"



class FPoint : virtual public Figure
{
public:
    FPoint();
    ~FPoint();
    FPoint(double x,double y,FRGB color={0,0,0});
    FPoint(FPoint &point);
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
    FRGB getColor();//获取线颜色
    void setColor(FRGB color);//设置线颜色
private:
    double x;
    double y;


};

#endif // FPOINT_H
