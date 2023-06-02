
#ifndef FIGURE_H
#define FIGURE_H
#include<QPoint>
#include<QVector>
#include<QDebug>
struct FRGB
{
    int R;
    int G;
    int B;
};

class Figure
{
public:
    Figure();
    ~Figure();
    virtual FRGB getColor()=0;//获取线颜色
    virtual void setColor(FRGB color)=0;//设置线颜色
    FRGB color;//图形颜色
private:
    char isDel;//点是否被删除
    int pattern;//图形样式型号
};

#endif // FIGURE_H
