
#include "filedata.h"

fileData::fileData()
{

}
void fileData::loadfile(const QString filename,vector<Coverage>& cov)//将文件中的数据存入图元类
{
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        qDebug()<<"open fail!!!"<<endl;
        return;
    }
    QTextStream in(&file);
    QString line;

    line=in.readLine();
    if(line=="Figure_type Figure_num")
    {
        line=in.readLine();
        QStringList typelist=line.split(" ");
        for(int i=0;i<typelist.size();i++)
        {
            //qDebug()<<typelist.at(i);
            if(typelist.at(i)=="COV_POINT")
            {
                Coverage temp;
                temp.figureNum=typelist.at(i+1).toInt();
                temp.cov_type=COV_POINT;
                cov.push_back(temp);
                qDebug()<<"1"<<temp.figureNum<<endl;
            }
            else if(typelist.at(i)=="COV_LINE")
            {
                Coverage temp;
                temp.cov_type=COV_LINE;
                temp.figureNum=typelist.at(i+1).toInt();
                cov.push_back(temp);
                qDebug()<<"2"<<temp.figureNum<<endl;
            }
            else if(typelist.at(i)=="COV_CIRCLE")
            {
                Coverage temp;
                temp.cov_type=COV_CIRCLE;
                temp.figureNum=typelist.at(i+1).toInt();
                cov.push_back(temp);
                qDebug()<<"3"<<temp.figureNum<<endl;
            }
            else if(typelist.at(i)=="COV_POLYGON")
            {
                Coverage temp;
                temp.cov_type=COV_POLYGON;
                temp.figureNum=typelist.at(i+1).toInt();
                cov.push_back(temp);
                qDebug()<<"4"<<temp.figureNum<<endl;
            }
            else if(typelist.at(i)=="COV_POLYLINE")
            {
                Coverage temp;
                temp.cov_type=COV_POLYLINE;
                temp.figureNum=typelist.at(i+1).toInt();
                cov.push_back(temp);
                qDebug()<<"5"<<temp.figureNum<<endl;
            }
            else if(typelist.at(i)=="COV_RECTANGLE")
            {
                Coverage temp;
                temp.cov_type=COV_RECTANGLE;
                temp.figureNum=typelist.at(i+1).toInt();
                cov.push_back(temp);
                qDebug()<<"6"<<temp.figureNum<<endl;
            }
        }
        while(!line.isNull())
        {
            line=in.readLine();
            if(line=="FPOINT")
            {
                line=in.readLine();
                QStringList data=line.split(" ");
                Figure* figure=new FPoint(data.at(0).toInt(),data.at(1).toInt(),data.at(2).toInt());
                figure->setColor(FRGB{data.at(3).toInt(),data.at(4).toInt(),data.at(5).toInt()});
                if(data.at(6)=="P_SQUARE")
                {
                    figure->setPat(P_SQUARE);
                }
                vector<QPointF> posdata;
                posdata.push_back(QPoint(data.at(0).toInt(),data.at(1).toInt()));
                for(int i=0;i<cov.size();i++)
                {
                    if(cov.at(i).cov_type==COV_POINT)
                    {
                        cov.at(i).figure.push_back(figure);
                        cov.at(i).fpos.push_back(posdata);
                    }
                }
                qDebug()<<"point load success"<<endl;
            }
            else if(line=="FLINE")
            {
                line=in.readLine();
                QStringList data=line.split(" ");
                Figure* figure=new FLine(data.at(0).toInt(),data.at(1).toInt(),data.at(2).toInt(),data.at(3).toInt(),data.at(4).toInt());
                figure->setColor(FRGB{data.at(6).toInt(),data.at(7).toInt(),data.at(8).toInt()});
                if(data.at(6)=="L_DOTTED")
                {
                    figure->setPat(L_DOTTED);
                }
                vector<QPointF> posdata;
                posdata.push_back(QPoint(data.at(0).toInt(),data.at(1).toInt()));
                posdata.push_back(QPoint(data.at(2).toInt(),data.at(3).toInt()));
                for(int i=0;i<cov.size();i++)
                {
                    if(cov.at(i).cov_type==COV_LINE)
                    {
                        cov.at(i).fpos.push_back(posdata);
                        cov.at(i).figure.push_back(figure);
                    }
                }
                qDebug()<<"line load success"<<endl;
            }
            else if(line=="FCIRCLE")
            {
                line=in.readLine();
                QStringList data=line.split(" ");
                Figure* figure=new FCircle(QPoint(data.at(0).toInt(),data.at(1).toInt()),data.at(2).toInt(),data.at(3).toInt());
                figure->setColor(FRGB{data.at(4).toInt(),data.at(5).toInt(),data.at(6).toInt()});
                figure->setFillColor(FRGB{data.at(7).toInt(),data.at(8).toInt(),data.at(9).toInt()});
                if(data.at(10)=="L_DOTTED")
                {
                    figure->setPat(L_DOTTED);
                }
                vector<QPointF> posdata;
                posdata.push_back(QPointF(data.at(0).toInt(),data.at(1).toInt()));
                for(int i=0;i<cov.size();i++)
                {
                    if(cov.at(i).cov_type==COV_CIRCLE)
                    {
                        cov.at(i).fpos.push_back(posdata);
                        cov.at(i).figure.push_back(figure);
                    }
                }
                qDebug()<<"circle load success"<<endl;
            }
            else if(line=="FRECTANGLE")
            {
                line=in.readLine();
                QStringList data=line.split(" ");
                Figure* figure=new FRectangle(QPoint(data.at(0).toInt(),data.at(1).toInt()),QPoint(data.at(2).toInt(),data.at(3).toInt()),data.at(4).toInt());
                figure->setColor(FRGB{data.at(5).toInt(),data.at(6).toInt(),data.at(7).toInt()});
                figure->setFillColor(FRGB{data.at(8).toInt(),data.at(9).toInt(),data.at(10).toInt()});
                if(data.at(11)=="L_DOTTED")
                {
                    figure->setPat(L_DOTTED);
                }
                vector<QPointF> posdata;
                posdata.push_back(QPointF(data.at(0).toInt(),data.at(1).toInt()));
                posdata.push_back(QPointF(data.at(2).toInt(),data.at(3).toInt()));
                for(int i=0;i<cov.size();i++)
                {
                    if(cov.at(i).cov_type==COV_RECTANGLE)
                    {
                        cov.at(i).fpos.push_back(posdata);
                        cov.at(i).figure.push_back(figure);
                    }
                }
                qDebug()<<"rectangle load success"<<endl;
            }
            else if(line=="FPOLYLINE")
            {
                line=in.readLine();
                int num=line.toInt();
                vector<QPointF> vec;
                QString str=in.readLine();
                QStringList data=str.split(" ");
                for(int i=0;i<num*2;i=i+2)
                {
                    //QPointF point(data.at(i).toInt(),data.at(++i).toInt());
                    vec.push_back(QPointF(data.at(i).toInt(),data.at(i+1).toInt()));
                    //qDebug()<<i<<endl;
                }
                line=in.readLine();
                data=line.split(" ");
                Figure* figure=new FPolyLine(vec,num,data.at(0).toInt());
                figure->setColor(FRGB{data.at(1).toInt(),data.at(2).toInt(),data.at(3).toInt()});
                if(data.at(4)=="L_DOTTED")
                {
                    figure->setPat(L_DOTTED);
                }
                for(int i=0;i<cov.size();i++)
                {
                    if(cov.at(i).cov_type==COV_POLYLINE)
                    {
                        cov.at(i).fpos.push_back(vec);
                        cov.at(i).figure.push_back(figure);
                    }
                }
                qDebug()<<"polyline load success"<<endl;
            }
            else if(line=="FPOLYGON")
            {
                line=in.readLine();
                int num=line.toInt();
                vector<QPointF> vec;
                QString str=in.readLine();
                QStringList data=str.split(" ");
                for(int i=0;i<num*2;i=i+2)
                {
                    //QPointF point(data.at(i).toInt(),data.at(++i).toInt());
                    vec.push_back(QPointF(data.at(i).toInt(),data.at(i+1).toInt()));
                    //qDebug()<<i<<endl;
                }
                line=in.readLine();
                data=line.split(" ");
                Figure* figure=new FPolygon(vec,num,data.at(0).toInt());
                figure->setColor(FRGB{data.at(1).toInt(),data.at(2).toInt(),data.at(3).toInt()});
                figure->setFillColor(FRGB{data.at(4).toInt(),data.at(5).toInt(),data.at(6).toInt()});
                if(data.at(7)=="L_DOTTED")
                {
                    figure->setPat(L_DOTTED);
                }
                for(int i=0;i<cov.size();i++)
                {
                    if(cov.at(i).cov_type==COV_POLYGON)
                    {
                        cov.at(i).fpos.push_back(vec);
                        cov.at(i).figure.push_back(figure);
                    }
                }
                qDebug()<<"polygon load success"<<endl;
            }
        }
    }
    file.close();
}

void fileData::savefile(const QString filename,vector<Coverage>& cov)
{
    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
    {
        qDebug()<<"open fail!!!"<<endl;
        return;
    }
    QTextStream out(&file);
    QString line;
    line="Figure_type Figure_num";
    out<<line<<"\n";
    //存储图层信息
    for(int i=0;i<cov.size();i++)
    {

        if(cov.at(i).cov_type==COV_POINT)
        {
            line="COV_POINT "+QString::number(cov.at(i).figureNum)+" ";
            out<<line;
        }
        else if(cov.at(i).cov_type==COV_LINE)
        {
            line="COV_LINE "+QString::number(cov.at(i).figureNum)+" ";
            out<<line;
        }
        else if(cov.at(i).cov_type==COV_CIRCLE)
        {
            line="COV_CIRCLE "+QString::number(cov.at(i).figureNum)+" ";
            out<<line;
        }
        else if(cov.at(i).cov_type==COV_POLYGON)
        {
            line="COV_POLYGON "+QString::number(cov.at(i).figureNum)+" ";
            out<<line;
        }
        else if(cov.at(i).cov_type==COV_POLYLINE)
        {
            line="COV_POLYLINE "+QString::number(cov.at(i).figureNum)+" ";
            out<<line;
        }
        else if(cov.at(i).cov_type==COV_RECTANGLE)
        {
            line="COV_RECTANGLE "+QString::number(cov.at(i).figureNum)+" ";
            out<<line;
        }
    }
    out<<"\n";
    //存储图元信息
    for(int i=0;i<cov.size();i++)
    {
        //存储点信息
        if(cov.at(i).cov_type==COV_POINT)
        {
            //qDebug()<<cov.at(i).figure.size();
            vector<FPoint*> fpoint;
            for(int j=0;j<cov.at(i).figureNum;j++)
            {
                //vector<FPoint*> fpoint;
                fpoint.push_back(dynamic_cast<FPoint*>(cov.at(i).figure.at(j)));
                out<<"FPOINT"<<"\n";
                out<<QString::number(fpoint.at(j)->getX())+" "+QString::number(fpoint.at(j)->getY())+" ";
                out<<QString::number(fpoint.at(j)->getSize())+" "+QString::number(fpoint.at(j)->getColor().R)+" "+QString::number(fpoint.at(j)->getColor().G)+" "+QString::number(fpoint.at(j)->getColor().B)+" ";
                if(fpoint.at(j)->getPat()==P_CIRCLE)
                {
                    out<<"P_CIRCLE";
                }
                else
                {
                    out<<"P_SQUARE";
                }
                out<<"\n";
            }
            qDebug()<<"point save sccess"<<endl;
        }
        //存储线信息
        if(cov.at(i).cov_type==COV_LINE)
        {
            //qDebug()<<cov.at(i).figure.size();
            vector<FLine*> fline;
            for(int j=0;j<cov.at(i).figureNum;j++)
            {
                //vector<FPoint*> fpoint;
                fline.push_back(dynamic_cast<FLine*>(cov.at(i).figure.at(j)));
                out<<"FLINE"<<"\n";
                out<<QString::number(fline.at(j)->getStart().x())+" "+QString::number(fline.at(j)->getStart().y())+" ";
                out<<QString::number(fline.at(j)->getEnd().x())+" "+QString::number(fline.at(j)->getEnd().y())+" ";
                out<<QString::number(fline.at(j)->getWidth())+" "+QString::number(fline.at(j)->getColor().R)+" "+QString::number(fline.at(j)->getColor().G)+" "+QString::number(fline.at(j)->getColor().B)+" ";
                if(fline.at(j)->getPat()==L_FULL)
                {
                    out<<"L_FULL";
                }
                else
                {
                    out<<"L_DOTTED";
                }
                out<<"\n";
            }
            qDebug()<<"line save sccess"<<endl;
        }
        //存储圆信息
        if(cov.at(i).cov_type==COV_CIRCLE)
        {
            //qDebug()<<cov.at(i).figure.size();
            vector<FCircle*> fcircle;
            for(int j=0;j<cov.at(i).figureNum;j++)
            {
                fcircle.push_back(dynamic_cast<FCircle*>(cov.at(i).figure.at(j)));
                out<<"FCIRCLE"<<"\n";
                out<<QString::number(fcircle.at(j)->getCenter().x())+" "+QString::number(fcircle.at(j)->getCenter().y())+" "+QString::number(fcircle.at(j)->getRadius())+" ";
                out<<QString::number(fcircle.at(j)->getWidth())+" ";
                out<<QString::number(fcircle.at(j)->getColor().R)+" "+QString::number(fcircle.at(j)->getColor().G)+" "+QString::number(fcircle.at(j)->getColor().B)+" ";
                out<<QString::number(fcircle.at(j)->getFillColor().R)+" "+QString::number(fcircle.at(j)->getFillColor().G)+" "+QString::number(fcircle.at(j)->getFillColor().B)+" ";
                if(fcircle.at(j)->getPat()==L_FULL)
                {
                    out<<"L_FULL";
                }
                else
                {
                    out<<"L_DOTTED";
                }
                out<<"\n";
            }
            qDebug()<<"circle save sccess"<<endl;
        }
        //存储矩形信息
        if(cov.at(i).cov_type==COV_RECTANGLE)
        {
            //qDebug()<<cov.at(i).figure.size();
            vector<FRectangle*> frectangle;
            for(int j=0;j<cov.at(i).figureNum;j++)
            {
                frectangle.push_back(dynamic_cast<FRectangle*>(cov.at(i).figure.at(j)));
                out<<"FRECTANGLE"<<"\n";
                out<<QString::number(frectangle.at(j)->getUL().x())+" "+QString::number(frectangle.at(j)->getUL().y())+" "+QString::number(frectangle.at(j)->getLR().x())+" "+QString::number(frectangle.at(j)->getLR().y())+" ";
                out<<QString::number(frectangle.at(j)->getWidth())+" ";
                out<<QString::number(frectangle.at(j)->getColor().R)+" "+QString::number(frectangle.at(j)->getColor().G)+" "+QString::number(frectangle.at(j)->getColor().B)+" ";
                out<<QString::number(frectangle.at(j)->getFillColor().R)+" "+QString::number(frectangle.at(j)->getFillColor().G)+" "+QString::number(frectangle.at(j)->getFillColor().B)+" ";
                if(frectangle.at(j)->getPat()==L_FULL)
                {
                    out<<"L_FULL";
                }
                else
                {
                    out<<"L_DOTTED";
                }
                out<<"\n";
            }
            qDebug()<<"rectangle save sccess"<<endl;
        }
        //存储折线
        if(cov.at(i).cov_type==COV_POLYLINE)
        {
            //qDebug()<<cov.at(i).figure.size();
            vector<FPolyLine*> fpolyline;
            for(int j=0;j<cov.at(i).figureNum;j++)
            {
                fpolyline.push_back(dynamic_cast<FPolyLine*>(cov.at(i).figure.at(j)));
                out<<"FPOLYLINE"<<"\n";
                out<<QString::number(fpolyline.at(j)->getNum())<<"\n";
                for(int k=0;k<fpolyline.at(j)->getNum();k++)
                {
                    out<<QString::number(fpolyline.at(j)->getVec().at(k).x())+" "+QString::number(fpolyline.at(j)->getVec().at(k).y())+" ";
                }
                out<<"\n";
                out<<QString::number(fpolyline.at(j)->getWidth())+" ";
                out<<QString::number(fpolyline.at(j)->getColor().R)+" "+QString::number(fpolyline.at(j)->getColor().G)+" "+QString::number(fpolyline.at(j)->getColor().B)+" ";
                if(fpolyline.at(j)->getPat()==L_FULL)
                {
                    out<<"L_FULL";
                }
                else
                {
                    out<<"L_DOTTED";
                }
                out<<"\n";
            }
            qDebug()<<"polyline save sccess"<<endl;
        }
    }
}
