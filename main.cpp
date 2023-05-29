
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

//int main(int argc, char *argv[])
//{
//    //数据库配置
//    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
//    db.setHostName("SUNSET");         // 服务器名称
//    db.setDatabaseName("CGEditer");       // 数据源名称
//    db.setUserName("sa");               // 用户名
//    db.setPassword("!!HLPwhn123");         // 密码

//    //数据库连接
//    bool ok = db.open();
//    if(ok)
//    {
//        qDebug()<<"DataBase open sucess!";
//    }
//    else {
//        qDebug()<<db.lastError();
//    }

//    //数据库查询
//    QSqlQuery query("SELECT * FROM FPoint;");
//    qDebug()<<"ID     LoginName        LoginTime                LogoutTime        OPeration";
//    while (query.next())
//    {
//        int ID = query.value(0).toInt();
//        QString LoginName = query.value(1).toString();
//        QString LoginTime = query.value(2).toString();
//        QString LogoutTime = query.value(3).toString();
//        int OPeration = query.value(4).toInt();

//        qDebug()<<QString("%1       %2       %3         %4      %5")
//                        .arg(ID).arg(LoginName).arg(LoginTime).arg(LogoutTime).arg(OPeration);
//    }

//    //数据库关闭
//    db.close();
//    return 0;
//}
