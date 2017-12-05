#ifndef DATABASECONNECTIONS_H
#define DATABASECONNECTIONS_H

#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include <QApplication>
#include<QString>
#include<QtSql/QSqlDatabase>
#include<QtSql>
#include<QMessageBox>

class DatabaseConnections
{
public:
    DatabaseConnections();

    QSqlDatabase ConnectionToDatabase();
protected:
    QSqlDatabase db1;

};

#endif // DATABASECONNECTIONS_H
