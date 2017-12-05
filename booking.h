#ifndef BOOKING_H
#define BOOKING_H
#include<QDebug>
#include <QMainWindow>
#include"databaseconnections.h"
#include"usertype.h"
#include"customermenus.h"
#include "mainmenus.h"
#include"ui_mainmenus.h"
#include"ui_customermenus.h"
class CustomerMenus;

#include<QString>
namespace Ui {
class Booking;
}

class Booking : public QMainWindow
{
    Q_OBJECT

public:
    explicit Booking(QWidget *parent = 0);
    void SetDetails(int ,int ,int ,double,QString,int);
    ~Booking();
     void CollectData();

private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

private:
    Ui::Booking *ui;
    int CustID;
    int seatno;
    int TicketNo;
    int FlightNo;
    double Amount;
    QSqlDatabase db;
    QString PayementMode;


};

#endif // BOOKING_H
