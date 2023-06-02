
#include "fline.h"

FLine::FLine()
{

}

FLine::FLine(QPoint start,QPoint end,FRGB color)
{
    this->start=start;
    this->end=end;
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
}
FLine::FLine(double sx,double sy,double ex,double ey,FRGB color)
{
    this->start.setX(sx);
    this->start.setY(sy);
    this->end.setX(ex);
    this->end.setY(ey);
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
}
FLine::FLine(FLine &line)
{
    this->start=line.start;
    this->end=line.end;
    this->color.R=line.color.R;
    this->color.G=line.color.G;
    this->color.B=line.color.B;
}
FLine::~FLine()
{

}
QPoint FLine::getStart()
{
    return start;
}
QPoint FLine::getEnd()
{
    return end;
}
void FLine::setStart(QPoint start)
{
    this->start=start;
}
void FLine::setEnd(QPoint end)
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
