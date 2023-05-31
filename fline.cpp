
#include "fline.h"

FLine::FLine()
{

}

FLine::FLine(QPoint start,QPoint end)
{
    this->start=start;
    this->end=end;
}
FLine::FLine(double sx,double sy,double ex,double ey)
{
    this->start.setX(sx);
    this->start.setY(sy);
    this->end.setX(ex);
    this->end.setY(ey);
}
FLine::FLine(FLine &line)
{
    this->start=line.start;
    this->end=line.end;
    this->getColor()[0]=line.getColor()[0];
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
int* FLine::getColor()//获取线颜色
{
    return color;
}
void FLine::setColor(int R,int G,int B)//设置线颜色
{
    this->color[0]=R;
    this->color[1]=G;
    this->color[2]=B;
}
