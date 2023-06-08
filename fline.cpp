
#include "fline.h"

FLine::FLine()
{

}

FLine::FLine(QPointF start,QPointF end,int width,FPATTERN pattern,FRGB color)
{
    this->start=start;
    this->end=end;
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
    this->pattern=pattern;
    this->type=FLINE;
    this->width=width;
}
FLine::FLine(double sx,double sy,double ex,double ey,int width,FPATTERN pattern,FRGB color)
{
    this->start.setX(sx);
    this->start.setY(sy);
    this->end.setX(ex);
    this->end.setY(ey);
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
    this->pattern=pattern;
    this->width=width;
}
FLine::FLine(FLine &line)
{
    this->start=line.start;
    this->end=line.end;
    this->color.R=line.color.R;
    this->color.G=line.color.G;
    this->color.B=line.color.B;
    this->pattern=line.pattern;
    this->width=line.width;
}
FLine::~FLine()
{

}
QPointF FLine::getStart()
{
    return start;
}
QPointF FLine::getEnd()
{
    return end;
}
void FLine::setStart(QPointF start)
{
    this->start=start;
}
void FLine::setEnd(QPointF end)
{
    this->end=end;
}
FRGB FLine::getColor()//获取线颜色
{
    return color;
}
void FLine::setColor(FRGB color)//设置线颜色
{
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
}
FIGURE_TYPE FLine::getType()
{
    return this->type;
}
FPATTERN FLine::getPat()//获取样式
{
    return this->pattern;
}
void FLine::setPat(FPATTERN pattern)//设置型号
{
    this->pattern=pattern;
}
int FLine::getWidth()//获取线宽
{
    return this->width;
}
void FLine::setWidth(int width)//设置线宽
{
    this->width=width;
}
void FLine::setFillColor(FRGB fillcolor)//重写，空函数
{
    qDebug()<<"Line connot be fiiled with color"<<endl;
    return;
}
FRGB FLine::getFillColor()//重写，空函数
{
    qDebug()<<"Line connot be fiiled with color"<<endl;
}
