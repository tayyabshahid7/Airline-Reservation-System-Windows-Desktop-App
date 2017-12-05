#include "flightcancellation.h"
#include "ui_flightcancellation.h"

FlightCancellation::FlightCancellation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FlightCancellation)
{
    ui->setupUi(this);
}

FlightCancellation::~FlightCancellation()
{
    delete ui;
}
 void FlightCancellation::setDetails(int t,int  f,int c,int  s)
 {
      ticketno=t,flightno=f,customerid=c,seatno=s;


 }


void FlightCancellation::on_pushButton_clicked()
{

    //setDetails(ui->lineEdit_2->text().toInt(),ui->lineEdit_3->text().toInt(),ui->lineEdit_4->text().toInt(),ui->lineEdit_8->text().toInt());

    QString id=ui->lineEdit_3->text();
    //CollectData();
    db.close();
    DatabaseConnections tempdb;
    db=tempdb.ConnectionToDatabase();
    db.open();
    if(!db.isOpen())
    {
        qDebug()<<"Failed to open DB";
        return;

    }
      qDebug()<<id;
      QSqlQuery query;
      QString canc="Cancelled";
        query.exec("DELETE FROM flightmanagement WHERE flightno = '"+id+"'");

        query.exec("update booking set currentstatus='"+canc+"' WHERE flightno = '"+id+"'");


}

void FlightCancellation::on_pushButton_2_clicked()
{
    QString temp= UserType::getUserType();

    if(temp=="Administrator")
    {

            MainMenus* cm=new MainMenus();
            this->hide();
             cm->show();





    }

    if(temp=="Customer")
    {
        CustomerMenus* cm=new CustomerMenus();
        this->hide();
         cm->show();



    }

}



