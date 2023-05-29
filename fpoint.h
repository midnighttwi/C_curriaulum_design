
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
private:
    double x;
    double y;


};

#endif // FPOINT_H
