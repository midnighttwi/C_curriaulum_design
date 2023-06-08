
#include "fpolyline.h"

FPolyLine::FPolyLine(vector<QPointF> polyline_point,int PointNum,int width,FPATTERN pattern,FRGB color)
{
    this->polyline_point=polyline_point;
    this->PointNum=PointNum;
    this->width=width;
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
    this->type=FPOLYLINE;
}
FPolyLine::FPolyLine(FPolyLine& polyline)
{
    this->polyline_point=polyline.polyline_point;
    this->PointNum=polyline.PointNum;
    this->width=polyline.width;
    this->color.R=polyline.color.R;
    this->color.G=polyline.color.G;
    this->color.B=polyline.color.B;
    this->type=polyline.type;
}
FPolyLine::~FPolyLine()
{

}
int FPolyLine::getWidth()
{
    return this->width;
}
void FPolyLine::setWidth(int width)
{
    this->width=width;
}
vector<QPointF> FPolyLine::getVec()
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
void FPolyLine::append(QPointF point)//增加一个点
{
    this->polyline_point.push_back(point);
    this->PointNum+=1;
}
void FPolyLine::pop_back()//移除最后一个点
{
    this->polyline_point.pop_back();
    this->PointNum-=1;
}
QPointF FPolyLine::at(int i)//访问数组中的点
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
void FPolyLine::change(int index,QPointF point)//将下标为index处的点改为point
{
    if(0<=index<this->PointNum)
    {
        this->polyline_point[index]=point;
    }
    else
    {
        qDebug()<<"Out of the index range"<<endl;
    }
}
FIGURE_TYPE FPolyLine::getType()
{
    return this->type;
}

FPATTERN FPolyLine::getPat()//获取样式
{
    return this->pattern;
}
void FPolyLine::setPat(FPATTERN pattern)//设置型号
{
    this->pattern=pattern;
}
void FPolyLine::setFillColor(FRGB fillcolor)//重写，空函数
{
    qDebug()<<"Polyline connot be fiiled with color"<<endl;
    return;
}
FRGB FPolyLine::getFillColor()//重写，空函数
{
    qDebug()<<"Polyline connot be fiiled with color"<<endl;
}
