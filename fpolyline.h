
#ifndef FPOLYLINE_H
#define FPOLYLINE_H

#include"figure.h"


class FPolyLine:virtual public Figure
{
public:
    FPolyLine(vector<QPointF> polyline_point,int PointNum,int width=2,FPATTERN pattern=L_FULL,FRGB color={0,0,0});
    FPolyLine(FPolyLine& polyline);
    ~FPolyLine();
    vector<QPointF> getVec();
    void append(QPointF point);//增加一个点
    void pop_back();//移除最后一个点
    QPointF at(int i);//访问数组中的点
    void change(int index,QPointF point);//将下标为index处的点改为point
    int getNum();//获取点的数量
    FRGB getColor();//获取线颜色
    void setColor(FRGB color);//设置线颜色
    FIGURE_TYPE getType();
    FPATTERN getPat();//获取样式
    void setPat(FPATTERN pattern);//设置型号
    int getWidth();
    void setWidth(int width);
    void setFillColor(FRGB fillcolor);//重写，空函数
    FRGB getFillColor();//重写，空函数
private:
    vector<QPointF> polyline_point;// 存储多边形的各个点
    int PointNum;//多边形点的数量
    long datOff;
    FIGURE_TYPE type;//图元类型
    int width;
};

#endif // FPOLYLINE_H
