
#ifndef FPOLYGON_H
#define FPOLYGON_H

#include"figure.h"


class FPolygon:virtual public Figure
{
public:
    FPolygon(vector<QPointF> src,int num,int width=2,FPATTERN pattern=L_FULL,FRGB color={0,0,0},FRGB fill={255,255,255});
    FPolygon(FPolygon& polygon);
    ~FPolygon();
    vector<QPointF> getVec();
    void append(QPointF point);//增加一个点
    void pop_back();//移除最后一个点
    QPointF at(int i);//访问数组中的点
    int getNum();//获取点的数量
    void change(int index,QPointF point);//将下标为index处的点改为point
    FRGB getFillColor();
    void setFillColor(FRGB fillcolor);
    FRGB getColor();//获取线颜色
    void setColor(FRGB color);//设置线颜色
    FIGURE_TYPE getType();
    FPATTERN getPat();//获取样式
    void setPat(FPATTERN pattern);//设置型号
    int getWidth();
    void setWidth(int width);
private:
    vector<QPointF> poly_point;
    int pointNum;
    long datOff;
    FRGB fillcolor;
    FIGURE_TYPE type;//图元类型
    int width;//线宽
};

#endif // FPOLYGON_H
