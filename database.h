
#ifndef DATABASE_H
#define DATABASE_H

#include"data.h"


class dataBase
{
public:
    dataBase();
    void loadfile(const QString filename,vector<Coverage>& cov);//将文件中的数据存入图元类
    void savefile(const QString filename,vector<Coverage>& cov);
    void add();
private:

};

#endif // DATABASE_H
