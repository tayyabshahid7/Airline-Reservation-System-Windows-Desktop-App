#ifndef CUSTOMSEARCH_H
#define CUSTOMSEARCH_H
#include"customermenus.h"
#include"ui_customermenus.h"
#include <QMainWindow>
#include<QtSql/QSqlDatabase>
#include<QtSql>
#include<QString>
#include"mainmenus.h"
#include"usertype.h"
#include"ui_mainmenus.h"

namespace Ui {
class CustomSearch;
}

class CustomSearch : public QMainWindow
{
    Q_OBJECT

public:
    explicit CustomSearch(QWidget *parent = 0);
    ~CustomSearch();
    void Filltable();
    void Filltable2();
    void CollectData();
    void SetDetails(QString,QString,QString);


private slots:

    void on_pushButton_2_clicked();

private:
    Ui::CustomSearch *uid;

    QSqlDatabase db;
    QString origin;
    QString destination;
    QString journeydate;
    int row_counts;

};

#endif // CUSTOMSEARCH_H
