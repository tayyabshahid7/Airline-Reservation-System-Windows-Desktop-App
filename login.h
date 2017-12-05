#ifndef LOGIN_H
#define LOGIN_H
#include<QtDebug>
#include<QFileInfo>
#include <QMainWindow>
#include <QApplication>
#include<QString>
#include<QtSql/QSqlDatabase>
#include<QtSql>
#include"mainmenus.h"
#include"customermenus.h"
#include<QMessageBox>
#include"usertype.h"

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_pushButton_clicked();

private:

    Ui::Login *ui;


    QSqlDatabase db;

};

#endif // LOGIN_H
