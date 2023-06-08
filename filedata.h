
#ifndef FILEDATA_H
#define FILEDATA_H

#include"data.h"


class fileData:public Data
{
public:
    fileData();
    ~fileData();
    void loadfile(const QString filename,vector<Coverage>& cov);//将文件中的数据存入图元类
    void savefile(const QString filename,vector<Coverage>& cov);
    QString get_type_num();
    void set_type_num(QString str);
    vector<QString>& get_figure_type();
    void set_figure_type(vector<QString>& figure_type);
    vector<QString>& get_pos_wid_col_pat();
    void set_pos_wid_col_pat(vector<QString>& pos_wid_col_pat);
private:
    QString type_num;//文件中包含的图层类型和数量
    vector<QString> figure_type;//图元类型
    vector<QString> pos_wid_col_pat;//存储点、直线、圆、矩形的坐标、大小（线宽）、颜色、样式
};

#endif // FILEDATA_H
