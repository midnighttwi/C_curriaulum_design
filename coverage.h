
#ifndef COVERAGE_H
#define COVERAGE_H

#include<QFile>
#include<QFileDialog>
#include<QTextStream>
#include<QFileinfo>
#include<QBuffer>
#include"fcircle.h"
#include"fline.h"
#include"fpoint.h"
#include"fpolyline.h"
#include"fpolygon.h"
#include"frectangle.h"

#include "figure.h"
#include "constType.h"



class Coverage
{
public:
    Coverage();
    Coverage(vector<Figure*> figure,int figurenum,COVERAGE_TYPE cov_type);
    vector<Figure*> figure;//存放图元数组
    vector<vector<QPointF>> fpos;//存放图元的坐标信息
    int figureNum;//图元数量
    COVERAGE_TYPE cov_type;//图层存储的图元类型
    double area;//图层中所有图元的总面积
    vector<double> figureArea;//单个图元的面积
    double parameter;//图层中所有图元的总周长
    vector<double> figureParameter;//单个图元的周长
};

#endif // COVERAGE_H
