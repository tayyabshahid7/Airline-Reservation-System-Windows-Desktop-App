#ifndef DELETEAIRCRAFTS_H
#define DELETEAIRCRAFTS_H

#include <QMainWindow>
#include"databaseconnections.h"
#include"airplanetype.h"
#include"mainmenus.h"
#include"ui_mainmenus.h"

namespace Ui {
class DeleteAirCrafts;
}

class DeleteAirCrafts : public QMainWindow,public AirplaneType
{
    Q_OBJECT

public:
    explicit DeleteAirCrafts(QWidget *parent = 0);
    void SetName(QString);
    void SetNo(int);
     void CollectData();
    ~DeleteAirCrafts();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
QSqlDatabase db;

    Ui::DeleteAirCrafts *ui;
};

#endif // DELETEAIRCRAFTS_H
