
#ifndef FIGURE_H
#define FIGURE_H
#include<QPoint>
#include<QVector>


class Figure
{
public:
    Figure();
    ~Figure();
    virtual int* getColor()=0;//获取线颜色
    virtual void setColor(int R,int G,int B)=0;//设置线颜色
    int* color=new int(3);//图形颜色
private:
    char isDel;//点是否被删除
    int pattern;//图形样式型号
};

#endif // FIGURE_H
