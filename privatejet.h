#ifndef PRIVATEJET_H
#define PRIVATEJET_H
#include"airplanetype.h"
#include"databaseconnections.h"
#include <QMainWindow>
#include<QtDebug>
#include"mainmenus.h"
#include"ui_mainmenus.h"

namespace Ui {
class PrivateJet;
}

class PrivateJet : public QMainWindow,public AirplaneType
{
    Q_OBJECT

public:


    explicit PrivateJet(QWidget *parent = 0);
    ~PrivateJet();
    void SetNo(int);
    void SetName(QString);
    void SetLendName(QString);
    void SetLendID(int);
    void CollectData();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    QString LendName;
    QSqlDatabase db;
    int LendID;
    Ui::PrivateJet *ui;
};

#endif // PRIVATEJET_H
