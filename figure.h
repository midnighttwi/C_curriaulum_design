
#ifndef FIGURE_H
#define FIGURE_H




class Figure
{
public:
    Figure();
    ~Figure();
    int getColor();//获取图元颜色
    void setColor(int R,int G,int B);//设置图元颜色
    virtual int getPattern()=0;//获取图元样式
    virtual void setPattern(int pattern)=0;//设置图元样式
    void gettype();//获取图元类型
private:
    Figure* figure;//父类指针
    int color[3];//图形颜色
    char isDel;//点是否被删除
    int pattern;//图形样式型号
    int type;//图形类型（点1 直线2 折线3 矩形4 圆形5 扇形6 多边形7）
};

#endif // FIGURE_H
