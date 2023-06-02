
#include "fpolyline.h"

FPolyLine::FPolyLine(FRGB color)
{
    this->PointNum=0;
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
}
FPolyLine::~FPolyLine()
{

}
QVector<QPoint> FPolyLine::getVec()
{
    return this->polyline_point;
}
int FPolyLine::getNum()
{
    return this->PointNum;
}

FRGB FPolyLine::getColor()//获取线颜色
{
    return this->color;
}
void FPolyLine::setColor(FRGB color)
{
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
}
void FPolyLine::append(QPoint point)//增加一个点
{
    this->polyline_point.append(point);
    this->PointNum+=1;
}
void FPolyLine::pop_back()//移除最后一个点
{
    this->polyline_point.pop_back();
    this->PointNum-=1;
}
QPoint FPolyLine::at(int i)//访问数组中的点
{
    if(0<=i<this->PointNum)
    {
        return this->polyline_point.at(i);
    }
    else
    {
        qDebug()<<"Out of the index range"<<endl;
    }
}
void FPolyLine::change(int index,QPoint point)//将下标为index处的点改为point
{
    if(0<=index<this->PointNum)
    {
        this->polyline_point.replace(index,point);
    }
    else
    {
        qDebug()<<"Out of the index range"<<endl;
    }
}
