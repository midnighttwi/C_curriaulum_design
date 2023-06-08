
#ifndef FLINE_H
#define FLINE_H

#include"figure.h"
#include<QPoint>

class FLine:virtual public Figure
{
public:
    FLine();
    FLine(QPointF start,QPointF end,int width,FPATTERN pattern=L_FULL,FRGB color={0,0,0});
    FLine(double sx,double sy,double ex,double ey,int width,FPATTERN pattern=L_FULL,FRGB color={0,0,0});
    FLine(FLine &line);
    ~FLine();
    FPATTERN getPat();//获取样式
    void setPat(FPATTERN pattern);//设置型号
    QPointF getStart();
    QPointF getEnd();
    void setStart(QPointF start);
    void setEnd(QPointF end);
    FRGB getColor();//获取线颜色
    void setColor(FRGB color);//设置线颜色
    FIGURE_TYPE getType();
    int getWidth();//获取线宽
    void setWidth(int width);//设置线宽
    void setFillColor(FRGB fillcolor);//重写，空函数
    FRGB getFillColor();//重写，空函数
private:
    QPointF start;//起点
    QPointF end;//终点
    long datOff;//文本中数据存储位置
    FIGURE_TYPE type;//图元类型
    int width;//线宽
};

#endif // FLINE_H
