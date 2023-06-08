
#include "fpoint.h"

FPoint::FPoint()
{

}

FPoint::~FPoint()
{

}
FPoint::FPoint(double x,double y,int size,FPATTERN pattern,FRGB color)
{
    this->x=x;
    this->y=y;
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
    this->type=FCIRCLE;
    this->pattern=pattern;
    this->size=size;
}
FPoint::FPoint(FPoint &point)
{
    this->x=point.x;
    this->y=point.y;
    this->color.R=point.color.R;
    this->color.G=point.color.G;
    this->color.B=point.color.B;
    this->type=point.type;
    this->pattern=point.pattern;
    this->size=point.size;
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
FIGURE_TYPE FPoint::getType()
{
    return this->type;
}
FPATTERN FPoint::getPat()//获取样式
{
    return this->pattern;
}
void FPoint::setPat(FPATTERN pattern)//设置型号
{
    this->pattern=pattern;
}
int FPoint::getSize()
{
    return this->size;
}
void FPoint::setSize(int size)
{
    this->size=size;
}
void FPoint::setFillColor(FRGB fillcolor)//重写，空函数
{
    qDebug()<<"Point connot be fiiled with color"<<endl;
    return;
}
FRGB FPoint::getFillColor()//重写，空函数
{
    qDebug()<<"Point connot be fiiled with color"<<endl;
}
