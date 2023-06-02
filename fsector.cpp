
#include "fsector.h"

FSector::FSector()
{

}

FSector::FSector(QPoint center,QPoint startpoint,QPoint endpoint,double angle,FRGB color,FRGB fill)
{
    this->center=center;
    this->start_point=startpoint;
    this->end_point=endpoint;
    this->angle=angle;
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
    this->fillcolor.R=fill.R;
    this->fillcolor.G=fill.G;
    this->fillcolor.B=fill.B;
}
FSector::FSector(FSector &sector)
{
    this->center=sector.center;
    this->start_point=sector.start_point;
    this->end_point=sector.end_point;
    this->angle=sector.angle;
    this->color.R=sector.color.R;
    this->color.G=sector.color.G;
    this->color.B=sector.color.B;
    this->fillcolor.R=sector.fillcolor.R;
    this->fillcolor.G=sector.fillcolor.G;
    this->fillcolor.B=sector.fillcolor.B;
}
FSector::~FSector()
{

}
QPoint FSector::getCenter()
{
    return this->center;
}
QPoint FSector::getStart()
{
    return this->start_point;
}
QPoint FSector::getEnd()
{
    return this->end_point;
}
double FSector::getAngle()
{
    return this->angle;
}
void FSector::setCenter(QPoint point)
{
    this->center=point;
}
void FSector::setStart(QPoint point)
{
    this->start_point=point;
}
void FSector::setEnd(QPoint point)
{
    this->end_point=point;
}
void FSector::setAngle(double angle)
{
    this->angle=angle;
}
FRGB FSector::getFillColor()//获取填充颜色
{
    return this->fillcolor;
}
void FSector::setFillColor(FRGB fill)//设置填充颜色
{
    this->fillcolor.R=fill.R;
    this->fillcolor.G=fill.G;
    this->fillcolor.B=fill.B;
}
FRGB FSector::getColor()//获取线颜色
{
    return this->color;
}
void FSector::setColor(FRGB color)//设置线颜色
{
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
}
