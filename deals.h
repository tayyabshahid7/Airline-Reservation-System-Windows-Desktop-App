#ifndef DEALS_H
#define DEALS_H
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

namespace Ui {
class Deals;
}

class Deals : public QMainWindow
{
    Q_OBJECT

public:
    explicit Deals(QWidget *parent = 0);
    ~Deals();
    void Filltable();
    void Filltable2();
    void CollectData();
    void SetDetails(QString,QString);
protected:
    QSqlDatabase db;
    QString origin;
    QString destination;
    Ui::Deals *uid;
    int row_counts;
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // DEALS_H
