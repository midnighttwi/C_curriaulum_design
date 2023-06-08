
#ifndef DATA_H
#define DATA_H

#include<QFile>
#include<QFileDialog>
#include<QTextStream>
#include<QFileinfo>
#include<QBuffer>
#include<QString>
#include"Coverage.h"
class Data
{
public:
    Data();
    ~Data();
    virtual void loadfile(const QString filename,vector<Coverage>& cov)=0;//将文件中的数据存入图元类
    virtual void savefile(const QString filename,vector<Coverage>& cov)=0;
    virtual void add(Coverage coverage,COVERAGE_TYPE cov_type)=0;//向文件中增加一张图层
    virtual void del(Coverage coverage,COVERAGE_TYPE cov_type)=0;//从文件中删除一张图层

    QString filename;//文件名

};

#endif // DATA_H
