
#ifndef FLINE_H
#define FLINE_H

#include"figure.h"
#include<QPoint>

class FLine:virtual public Figure
{
public:
    FLine();
    FLine(QPoint start,QPoint end,FRGB color={0,0,0});
    FLine(double sx,double sy,double ex,double ey,FRGB color={0,0,0});
    FLine(FLine &line);
    ~FLine();
    QPoint getStart();
    QPoint getEnd();
    void setStart(QPoint start);
    void setEnd(QPoint end);
    FRGB getColor();//获取线颜色
    void setColor(FRGB color);//设置线颜色
private:
    QPoint start;//起点
    QPoint end;//终点
    long datOff;//文本中数据存储位置
};

#endif // FLINE_H
