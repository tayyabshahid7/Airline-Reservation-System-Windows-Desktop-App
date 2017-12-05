#ifndef AIRCRAFTMANAGEMENT_H
#define AIRCRAFTMANAGEMENT_H
#include<QtDebug>
#include <QMainWindow>
#include<QString>
#include "login.h"
#include"usertype.h"
#include"airplanetype.h"
#include"databaseconnections.h"
#include "signup.h"
#include"mainmenus.h"
#include"ui_mainmenus.h"
namespace Ui {
class AirCraftManagement;
}

class AirCraftManagement : public QMainWindow ,public AirplaneType
{
    Q_OBJECT


public:


    explicit AirCraftManagement(QWidget *parent = 0);
    ~AirCraftManagement();
    void CollectData();

    void SetEconomy(int);
    void SetExecutive(int);
    void SetName(QString);
    void SetNo(int);
    void SetBusiness(int);



private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::AirCraftManagement *ui;
    int MaxBusinessClass;
     QSqlDatabase db;
    int MaxExecutiveClass;

    int  MaxEconomyClass;

};

#endif // AIRCRAFTMANAGEMENT_H
