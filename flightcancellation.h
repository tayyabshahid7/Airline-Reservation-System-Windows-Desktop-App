#ifndef FLIGHTCANCELLATION_H
#define FLIGHTCANCELLATION_H


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
class FlightCancellation;
}

class FlightCancellation : public QMainWindow
{
    Q_OBJECT

public:
    explicit FlightCancellation(QWidget *parent = 0);
    void setDetails(int,int,int,int);
    ~FlightCancellation();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


private:
    QSqlDatabase db;
    int ticketno,flightno,customerid,seatno;
    Ui::FlightCancellation *ui;
};

#endif // FLIGHTCANCELLATION_H
