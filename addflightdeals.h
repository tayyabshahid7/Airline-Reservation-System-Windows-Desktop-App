#ifndef ADDFLIGHTDEALS_H
#define ADDFLIGHTDEALS_H
#include"databaseconnections.h"
#include"mainmenus.h"
#include"ui_mainmenus.h"

#include <QMainWindow>

namespace Ui {
class AddFlightDeals;
}

class AddFlightDeals : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddFlightDeals(QWidget *parent = 0);
    ~AddFlightDeals();
    void CollectData();
    void SetDetails(QString,QString,QString,QString,QString,QString);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:

    Ui::AddFlightDeals *ui;
    QSqlDatabase db;
    QString date,flightname,departurettime,origin,destination,price;
};

#endif // ADDFLIGHTDEALS_H
