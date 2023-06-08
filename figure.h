
#ifndef FIGURE_H
#define FIGURE_H
#include<QPoint>
#include<QVector>
#include<QDebug>
#include<QObject>
#include"constType.h"
using namespace std;
struct FRGB
{
    int R;
    int G;
    int B;
};

class Figure:public QObject
{
    Q_OBJECT
public:
    Figure();
    ~Figure();
    virtual FRGB getColor()=0;//获取线颜色
    virtual void setColor(FRGB color)=0;//设置线颜色
    virtual FPATTERN getPat()=0;//获取样式
    virtual void setPat(FPATTERN pattern)=0;//设置型号
    virtual FIGURE_TYPE getType()=0;//获取图元类型
    virtual void setFillColor(FRGB fillcolor)=0;
    virtual FRGB getFillColor()=0;
    FRGB color;//图形颜色
    char isDel;//点是否被删除
    FPATTERN pattern;//图形样式型号

};

#endif // FIGURE_H
