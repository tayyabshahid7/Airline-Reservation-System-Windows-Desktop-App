#ifndef CUSTOMERSFROMDB_H
#define CUSTOMERSFROMDB_H
#include<QtDebug>
#include<QFileInfo>
#include <QMainWindow>
#include <QApplication>
#include<QString>
#include<QtSql/QSqlDatabase>
#include<QtSql>
#include<QMessageBox>
#include"customermenus.h"
#include"ui_customermenus.h"
#include"mainmenus.h"
#include"ui_mainmenus.h"
#include"customerdetails.h"
#include"ui_customerdetails.h"
namespace Ui {
class CustomersFromDB;
}

class CustomersFromDB : public QMainWindow
{
    Q_OBJECT

public:
    explicit CustomersFromDB(QWidget *parent = 0);
    ~CustomersFromDB();
    void Filltable2();
private slots:
    void on_pushButton_2_clicked();

private:
    QSqlDatabase db;
    int row_counts;
    Ui::CustomersFromDB *uid;
};

#endif // CUSTOMERSFROMDB_H
