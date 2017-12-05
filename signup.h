#ifndef SIGNUP_H
#define SIGNUP_H
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include <QMainWindow>
#include <QApplication>
#include<QString>
#include<QtSql/QSqlDatabase>
#include<QtSql>
#include<QMessageBox>
#include<login.h>
namespace Ui {
class SignUP;
}

class SignUP : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignUP(QWidget *parent = 0);
    ~SignUP();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SignUP *ui;
    QSqlDatabase db1;
};

#endif // SIGNUP_H
