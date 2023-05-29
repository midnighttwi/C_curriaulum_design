
#ifndef FLINE_H
#define FLINE_H

#include"figure.h"
#include<QPoint>

class FLine:virtual public Figure
{
public:
    FLine();
private:
    QPoint start;//起点
    QPoint end;//终点
    long datOff;//文本中数据存储位置
};

#endif // FLINE_H
