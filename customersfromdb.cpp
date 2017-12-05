#include "customersfromdb.h"
#include "ui_customersfromdb.h"

CustomersFromDB::CustomersFromDB(QWidget *parent) :
    QMainWindow(parent),
    uid(new Ui::CustomersFromDB)
{
    uid->setupUi(this);
    QString servername="RANATAYYABPC";
    QString dbn="AirlineSystem";

    db=QSqlDatabase::addDatabase("QODBC3");
    QString dsn = QString("DRIVER={SQL Server};SERVER=%1;DATABASE=%2;Trusted_Connection=Yes;").arg(servername).arg(dbn);
    db.setDatabaseName(dsn);

       db.setConnectOptions();
    db.open();

    if(!db.isOpen())
    {
        qDebug()<<"Error!!";

    }
    else
        qDebug()<<"ok";

    Filltable2();
}



void CustomersFromDB::Filltable2()
{

int num_rows,r,c;


QSqlQuery q;

if(!q.exec("select count(id) as num_rows from customerdetails"))qDebug()<<q.lastError().text();
q.first();

num_rows=q.value(0).toInt();

uid->tableWidget->setRowCount(num_rows);

if(!q.exec("select * from customerdetails " ))qDebug()<<q.lastError().text();

row_counts=num_rows;

for(r=0,q.first();q.isValid();q.next(),++r){
    for(c=0;c<7;++c){

        uid->tableWidget->setItem(r,c,new QTableWidgetItem(q.value(c).toString()));
    }
}


}


CustomersFromDB::~CustomersFromDB()
{
    delete uid;
}

void CustomersFromDB::on_pushButton_2_clicked()
{
    CustomerDetails *m=new CustomerDetails();
    this->hide();
    m->show();

}
