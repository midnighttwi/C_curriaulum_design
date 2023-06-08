
#ifndef DSHPFILE_H
#define DSHPFILE_H

#include"data.h"


class Dshpfile:public Data
{
public:
    Dshpfile();
    void loadfile(const QString filename,vector<Coverage>& cov);//将文件中的数据存入图元类
    void savefile(const QString filename,vector<Coverage>& cov);//将图层中的数据保存到文件中
};

#endif // DSHPFILE_H
