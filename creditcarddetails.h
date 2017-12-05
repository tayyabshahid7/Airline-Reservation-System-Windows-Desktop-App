#ifndef CREDITCARDDETAILS_H
#define CREDITCARDDETAILS_H
#include<QtDebug>
#include <QMainWindow>
#include"databaseconnections.h"
#include<QString>
#include"mainmenus.h"
#include"usertype.h"
#include"ui_mainmenus.h"

namespace Ui {
class CreditCardDetails;
}

class CreditCardDetails : public QMainWindow
{
    Q_OBJECT

public:
    void EnterCardNo(int);
    void EnterCardType(QString);
    void EnterExpiryDate(QString);

    explicit CreditCardDetails(QWidget *parent = 0);
    ~CreditCardDetails();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
     int CardNo;
     QString CardType;
     QString ExpiryDate;
     QSqlDatabase db;

    Ui::CreditCardDetails *ui;
};

#endif // CREDITCARDDETAILS_H
