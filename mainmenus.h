#ifndef MAINMENUS_H
#define MAINMENUS_H

#include <QMainWindow>
#include"aircraftmanagement.h"
#include"booking.h"
#include"deletedeals.h"
#include"creditcarddetails.h"
#include"customerdetails.h"
#include"customsearch.h"
#include"aircraftmanagement.h"
#include"deleteaircrafts.h"
#include"privatejet.h"
#include"flightavailability.h"
#include"flightcancellation.h"
#include"flightmanagement.h"
#include"deals.h"
#include"deleteprivatejets.h"
#include"addflightdeals.h"

namespace Ui {
class MainMenus;
}

class MainMenus : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenus(QWidget *parent = 0);
    ~MainMenus();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_13_clicked();

private:
    Ui::MainMenus *ui;
};

#endif // MAINMENUS_H
