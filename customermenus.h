#ifndef CUSTOMERMENUS_H
#define CUSTOMERMENUS_H

#include <QMainWindow>
#include <booking.h>
#include"customerdetails.h"
#include"flightavailability.h"
#include"flightcancellation.h"
#include"customsearch.h"
#include"deals.h"
#include"specialdeals.h"
#include"flightcancel2.h"
namespace Ui {
class CustomerMenus;
}

class CustomerMenus : public QMainWindow
{
    Q_OBJECT

public:
    explicit CustomerMenus(QWidget *parent = 0);
    ~CustomerMenus();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_13_clicked();

private:
    Ui::CustomerMenus *ui;
    SpecialDeals * SD;

};

#endif // CUSTOMERMENUS_H
