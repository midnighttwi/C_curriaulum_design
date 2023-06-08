
#include "fpolygon.h"

FPolygon::FPolygon(vector<QPointF> src,int num,int width,FPATTERN pattern,FRGB color,FRGB fill)
{
    this->poly_point=src;
    this->pointNum=num;
    this->color.R=color.R;
    this->color.G=color.G;
    this->color.B=color.B;
    this->fillcolor.R=fill.R;
    this->fillcolor.G=fill.G;
    this->fillcolor.B=fill.B;
    this->type=FPOLYGON;
    this->width=width;
}
FPolygon::FPolygon(FPolygon& polygon)
{
    this->poly_point=polygon.poly_point;
    this->pointNum=polygon.pointNum;
    this->color.R=polygon.color.R;
    this->color.G=polygon.color.G;
    this->color.B=polygon.color.B;
    this->fillcolor.R=polygon.fillcolor.R;
    this->fillcolor.G=polygon.fillcolor.G;
    this->fillcolor.B=polygon.fillcolor.B;
    this->type=polygon.type;
    this->width=polygon.width;
}
FPolygon::~FPolygon()
{

}
vector<QPointF> FPolygon::getVec()
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
void FPolygon::append(QPointF point)//增加一个点
{
    this->poly_point.push_back(point);
    this->pointNum+=1;
}
void FPolygon::pop_back()//移除最后一个点
{
    this->poly_point.pop_back();
    this->pointNum-=1;
}
QPointF FPolygon::at(int i)//访问数组中的点
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
void FPolygon::change(int index,QPointF point)
{
    if(0<=index<this->pointNum)
    {
    this->poly_point[index]=point;
    }
    else
    {
        qDebug()<<"Out of the index range"<<endl;
    }
}
FIGURE_TYPE FPolygon::getType()
{
    return this->type;
}
FPATTERN FPolygon::getPat()//获取样式
{
    return this->pattern;
}
void FPolygon::setPat(FPATTERN pattern)//设置型号
{
    this->pattern=pattern;
}
int FPolygon::getWidth()
{
    return this->width;
}
void FPolygon::setWidth(int width)
{
    this->width=width;
}
