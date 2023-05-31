
#ifndef FPOLYLINE_H
#define FPOLYLINE_H

#include"figure.h"


class FPolyLine:virtual public Figure
{
public:
    FPolyLine();
    FPolyLine(QVector<QPoint> PL_point,int num);
    FPolyLine(FPolyLine &ployline);
    ~FPolyLine();
    QVector<QPoint> getVec();
    int getNum();
    void setNum(int num);
    int* getColor();//获取线颜色
    void setColor(int R,int G,int B);//设置线颜色
private:
    QVector<QPoint> polyline_point;// 存储多边形的各个点
    int PointNum;//多边形点的数量
    long datOff;
};

#endif // FPOLYLINE_H
