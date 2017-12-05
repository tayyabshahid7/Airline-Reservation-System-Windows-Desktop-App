#ifndef FLIGHTAVAILABILITY_H
#define FLIGHTAVAILABILITY_H

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
class FlightAvailability;

}

class FlightAvailability : public QMainWindow
{
    Q_OBJECT

public:

    void Filltable();
    void Filltable2();
    void CollectData();
    void SetDetails(QString,QString,QString);


    explicit FlightAvailability(QWidget *parent = 0);
    ~FlightAvailability();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    QSqlDatabase db;
    QString origin;
    QString destination;
    QString journeydate;
    int row_counts;

    Ui::FlightAvailability *uid;

};

#endif // FLIGHTAVAILABILITY_H
