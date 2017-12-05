#ifndef SEARCH_H
#define SEARCH_H

#include<QtDebug>
#include<QFileInfo>
#include <QMainWindow>
#include <QApplication>
#include<QString>
#include<QtSql/QSqlDatabase>
#include<QtSql>
#include<QMessageBox>


namespace Ui {
class Search;
}

class Search : public QMainWindow
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = 0);
    ~Search();
    void Filltable();

private:
     QSqlDatabase db;
    Ui::Search *ui;
};

#endif // SEARCH_H
