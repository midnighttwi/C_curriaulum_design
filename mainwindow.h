
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void connectSQL();//连接数据库

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;//数据库
};

#endif // MAINWINDOW_H
