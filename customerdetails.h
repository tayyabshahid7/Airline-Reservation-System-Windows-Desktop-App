#ifndef CUSTOMERDETAILS_H
#define CUSTOMERDETAILS_H
#include"databaseconnections.h"
#include <QMainWindow>
#include"person.h"
#include"customermenus.h"
#include"mainmenus.h"
#include"ui_mainmenus.h"
#include"usertype.h"
#include"ui_customermenus.h"
#include"customersfromdb.h"
#include"ui_customersfromdb.h"
namespace Ui {
class CustomerDetails;
}

class CustomerDetails : public QMainWindow,public Person
{
    Q_OBJECT

public:
    explicit CustomerDetails(QWidget *parent = 0);
    ~CustomerDetails();
    void CollectData();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::CustomerDetails *ui;
    QSqlDatabase db;
};

#endif // CUSTOMERDETAILS_H
