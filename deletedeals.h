#ifndef DELETEDEALS_H
#define DELETEDEALS_H
#include"mainmenus.h"
#include"ui_mainmenus.h"

#include"databaseconnections.h"

#include <QMainWindow>

namespace Ui {
class DeleteDeals;
}

class DeleteDeals : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteDeals(QWidget *parent = 0);
    ~DeleteDeals();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    QString id;
    QSqlDatabase db;
    Ui::DeleteDeals *ui;
};

#endif // DELETEDEALS_H
