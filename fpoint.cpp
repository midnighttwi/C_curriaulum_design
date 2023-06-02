
#include "fpoint.h"

FPoint::FPoint()
{

}

FPoint::~FPoint()
{

}
FPoint::FPoint(double x,double y,FRGB color)
{
    this->x=x;
    this->y=y;
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
}
FPoint::FPoint(FPoint &point)
{
    this->x=point.x;
    this->y=point.y;
    this->color.R=point.color.R;
    this->color.G=point.color.G;
    this->color.B=point.color.B;
}
double FPoint::getX()
{
    return x;
}
double FPoint::getY()
{
    return y;
}
void FPoint::setX(double x)
{
    this->x=x;
}
void FPoint::setY(double y)
{
    this->y=y;
}
FRGB FPoint::getColor()//获取线颜色
{
    return color;
}
void FPoint::setColor(FRGB color)
{
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
}
