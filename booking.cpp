#include "booking.h"
#include "ui_booking.h"

Booking::Booking(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Booking)
{
    ui->setupUi(this);
}

Booking::~Booking()
{
    delete ui;
}


 void Booking:: SetDetails(int t ,int c ,int f ,double a,QString p,int s){

     TicketNo=t;
     CustID=c;
     FlightNo=f;
     Amount=a;
     PayementMode=p;
     seatno=s;

 }

 void Booking::CollectData()
 {
     QString temp;
     if(ui->radioButton->isChecked())
     {
         temp="Cheque";

     }
     else if(ui->radioButton_2->isChecked())
     {
         temp="Credit Card";
     }
     else if(ui->radioButton_3->isChecked())
     {
         temp="Cash";

     }
     SetDetails(ui->lineEdit_2->text().toInt(),ui->lineEdit_3->text().toInt(),ui->lineEdit_7->text().toInt(),
                ui->lineEdit_8->text().toDouble(),temp,ui->lineEdit_9->text().toInt());


 }

void Booking::on_pushButton_clicked()
{
    CollectData();
    DatabaseConnections tempdb;
    db=tempdb.ConnectionToDatabase();
    db.open();
    if(!db.isOpen())
    {
        qDebug()<<"Failed to open DB";
        return;

    }

    qDebug()<<TicketNo;

    qDebug()<<CustID;

    qDebug()<<seatno;




    QSqlQuery query;
    query.prepare("INSERT INTO booking VALUES (?, ?, ?,?,?,?,?)");


    query.addBindValue( TicketNo);
    query.addBindValue( CustID);
    query.addBindValue(seatno);
    query.addBindValue(FlightNo);
    query.addBindValue(Amount);
    query.addBindValue(PayementMode);
    query.addBindValue("Active");


    query.exec();


    qDebug()<<PayementMode;
}

void Booking::on_pushButton_2_clicked()
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
