
#include "frectangle.h"

FRectangle::FRectangle()
{

}
FRectangle::FRectangle(QPoint ul,QPoint lr,FRGB color,FRGB fill)
{
    this->upperleft=ul;
    this->lowright=lr;
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
    this->fillcolor.R=fill.R;
    this->fillcolor.G=fill.G;
    this->fillcolor.B=fill.B;
}
FRectangle::FRectangle(double sx,double sy,double ex,double ey,FRGB color,FRGB fill)
{
    this->upperleft.setX(sx);
    this->upperleft.setY(sy);
    this->lowright.setX(ex);
    this->lowright.setY(ey);
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
    this->fillcolor.R=fill.R;
    this->fillcolor.G=fill.G;
    this->fillcolor.B=fill.B;
}
FRectangle::FRectangle(FRectangle &rectangle)
{
    this->upperleft=rectangle.upperleft;
    this->lowright=rectangle.lowright;
    this->color.R=rectangle.color.R;
    this->color.G=rectangle.color.G;
    this->color.B=rectangle.color.B;
    this->fillcolor.R=rectangle.fillcolor.R;
    this->fillcolor.G=rectangle.fillcolor.G;
    this->fillcolor.B=rectangle.fillcolor.B;
}
FRectangle::~FRectangle()
{

}
QPoint FRectangle::getUL()//获取左上角点
{
    return this->upperleft;
}
QPoint FRectangle::getLR()//获取右下角点
{
    return this->lowright;
}
void FRectangle::setUL(QPoint point)//设置左上角点
{
    this->upperleft=point;
}
void FRectangle::setLR(QPoint point)//设置右下角点
{
    this->lowright=point;
}
FRGB FRectangle::getFillColor()//获取填充颜色
{
    return this->fillcolor;
}
void FRectangle::setFillColor(FRGB fill)//设置填充颜色
{
    this->fillcolor.R=fill.R;
    this->fillcolor.G=fill.G;
    this->fillcolor.B=fill.B;
}
FRGB FRectangle::getColor()//获取线颜色
{
    return this->color;
}
void FRectangle::setColor(FRGB color)//设置线颜色
{
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
}
