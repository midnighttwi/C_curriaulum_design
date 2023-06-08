
#ifndef COV_CONTROL_H
#define COV_CONTROL_H

#include"coverage.h"
#include"data.h"
#include"filedata.h"

class Cov_control
{
public:
    Cov_control();
    ~Cov_control();
    void loadfile(const QString filename,vector<Coverage>& cov);//将文件中的数据存入图元类
    void savefile(const QString filename,vector<Coverage>& cov);//将图层中的数据保存到文件中
    void loadDatabase();//将数据库中的数据实例化为类
    void saveDatabase();//将数据保存到数据库中
};

#endif // COV_CONTROL_H
