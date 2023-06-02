
#include "fcircle.h"

FCircle::FCircle()
{

}

FCircle::FCircle(QPoint center,double radius,FRGB color,FRGB fill)
{
    this->center=center;
    this->radius=radius;
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
    this->fillcolor.R=fill.R;
    this->fillcolor.G=fill.G;
    this->fillcolor.B=fill.B;
}
FCircle::FCircle(FCircle &circle)
{
    this->center=circle.center;
    this->radius=circle.radius;
    this->color.R=circle.color.R;
    this->color.G=circle.color.G;
    this->color.B=circle.color.B;
    this->fillcolor.R=circle.fillcolor.R;
    this->fillcolor.G=circle.fillcolor.G;
    this->fillcolor.B=circle.fillcolor.B;

}
FCircle::~FCircle()
{

}
QPoint FCircle::getCenter()//获取圆心
{
    return this->center;
}
double FCircle::getRadius()//获取半径
{
    return this->radius;
}
void FCircle::setCenter(QPoint point)//设置圆心
{
    this->center=point;
}
void FCircle::setRadius(double radius)//设置半径
{
    this->radius=radius;
}
FRGB FCircle::getFillColor()//获取填充颜色
{
    return this->fillcolor;
}
void FCircle::setFillColor(FRGB fill)//设置填充颜色
{
    this->fillcolor.R=fill.R;
    this->fillcolor.G=fill.G;
    this->fillcolor.B=fill.B;
}
FRGB FCircle::getColor()//获取线颜色
{
    return this->color;
}
void FCircle::setColor(FRGB color)//设置线颜色
{
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
}
