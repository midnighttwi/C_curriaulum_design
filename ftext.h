
#ifndef FTEXT_H
#define FTEXT_H

#include<QPoint>
#include<QString>

class FText
{
public:
    FText();
    FText(QString contents,QPoint position,QString font="微软雅黑",int size=12,int R=0,int G=0,int B=0);
    ~FText();
    QString getContents();
    QString getFont();//获取字体
    int getColor();
    int getSize();
    QPoint getPos();
    void setContents(QString str);
    void setFont(QString font);
    void setColor(int R,int G,int B);
    void setPos(QPoint pos);
private:
    QPoint position;
    QString Font;//字体
    QString contents;//内容
    int size;//尺寸
    int* color=new int(3);//字体颜色
};

#endif // FTEXT_H
