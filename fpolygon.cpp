
#include "fpolygon.h"

FPolygon::FPolygon(FRGB color,FRGB fill)
{
    this->pointNum=0;
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
    this->fillcolor.R=fill.R;
    this->fillcolor.G=fill.G;
    this->fillcolor.B=fill.B;
}
FPolygon::~FPolygon()
{

}
QVector<QPoint> FPolygon::getVec()
{
    return this->poly_point;
}
int FPolygon::getNum()
{
    return this->pointNum;
}

FRGB FPolygon::getFillColor()
{
    return this->fillcolor;
}
void FPolygon::setFillColor(FRGB fill)
{
    this->fillcolor.R=fill.R;
    this->fillcolor.G=fill.G;
    this->fillcolor.B=fill.B;
}
FRGB FPolygon::getColor()//获取线颜色
{
    return this->color;
}
void FPolygon::setColor(FRGB color)
{
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
}
void FPolygon::append(QPoint point)//增加一个点
{
    this->poly_point.append(point);
    this->pointNum+=1;
}
void FPolygon::pop_back()//移除最后一个点
{
    this->poly_point.pop_back();
    this->pointNum-=1;
}
QPoint FPolygon::at(int i)//访问数组中的点
{
    if(0<=i<this->pointNum)
    {
    return this->poly_point.at(i);
    }
    else
    {
    qDebug()<<"Out of the index range"<<endl;
    }
}
void FPolygon::change(int index,QPoint point)
{
    if(0<=index<this->pointNum)
    {
        this->poly_point.replace(index,point);
    }
    else
    {
        qDebug()<<"Out of the index range"<<endl;
    }
}
