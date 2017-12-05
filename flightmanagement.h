#ifndef FLIGHTMANAGEMENT_H
#define FLIGHTMANAGEMENT_H
#include"databaseconnections.h"
#include"mainmenus.h"
#include"ui_mainmenus.h"


#include <QMainWindow>

namespace Ui {
class FlightManagement;
}

class FlightManagement : public QMainWindow
{
    Q_OBJECT

public:
    explicit FlightManagement(QWidget *parent = 0);
    void SetDetails(int ,QString,QString,int);
    void CollectData();
    ~FlightManagement();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

protected:

    Ui::FlightManagement *ui;
    int flightno,aircraftno;
    QSqlDatabase db;
    QString arrivaltime,depttime;


};

#endif // FLIGHTMANAGEMENT_H
