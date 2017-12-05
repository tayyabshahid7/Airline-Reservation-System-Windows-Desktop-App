#include "databaseconnections.h"

DatabaseConnections::DatabaseConnections()
{

}

QSqlDatabase DatabaseConnections::ConnectionToDatabase()
{
    QString servername="RANATAYYABPC";
    QString dbn="AirlineSystem";

    db1=QSqlDatabase::addDatabase("QODBC3");
    QString dsn = QString("DRIVER={SQL Server};SERVER=%1;DATABASE=%2;Trusted_Connection=Yes;").arg(servername).arg(dbn);
    db1.setDatabaseName(dsn);

    if(db1.open())
    {
        db1.setConnectOptions();
        //QMessageBox::information(0,"DataBase Connection","Opened");
       // ui->label->setText("Created");
    }
    else
    {

        // QMessageBox::critical(0,QObject::tr("Database Error"),db.lastError().text());
      //  ui->label->setText("Not Created");
    }
    return db1;
}
