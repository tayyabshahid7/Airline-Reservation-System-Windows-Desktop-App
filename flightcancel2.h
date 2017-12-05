#ifndef FLIGHTCANCEL2_H
#define FLIGHTCANCEL2_H

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
class FlightCancel2;
}

class FlightCancel2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit FlightCancel2(QWidget *parent = 0);
    void setDetails(int,int,int,int);

    ~FlightCancel2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    QSqlDatabase db;
     int ticketno,flightno,customerid,seatno;
    Ui::FlightCancel2 *ui;
};

#endif // FLIGHTCANCEL2_H
