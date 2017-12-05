#include "flightcancel2.h"
#include "ui_flightcancel2.h"

FlightCancel2::FlightCancel2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FlightCancel2)
{
    ui->setupUi(this);
}

FlightCancel2::~FlightCancel2()
{
    delete ui;
}

void FlightCancel2::setDetails(int t,int  f,int c,int  s)
{
     ticketno=t,flightno=f,customerid=c,seatno=s;


}




void FlightCancel2::on_pushButton_clicked()
{
    QString id=ui->lineEdit_3->text();
    QString custid=ui->lineEdit_4->text();
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

        query.exec("DELETE FROM booking WHERE flightno ='"+id+"' and customerid='" +custid+"' " );



}

void FlightCancel2::on_pushButton_2_clicked()
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
