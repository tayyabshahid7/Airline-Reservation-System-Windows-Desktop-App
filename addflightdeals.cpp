#include "addflightdeals.h"
#include "ui_addflightdeals.h"

AddFlightDeals::AddFlightDeals(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddFlightDeals)
{
    ui->setupUi(this);
}

AddFlightDeals::~AddFlightDeals()
{
    delete ui;
}

void AddFlightDeals::on_pushButton_2_clicked()
{




            MainMenus* cm=new MainMenus();
            this->hide();
             cm->show();







}

void AddFlightDeals::SetDetails(QString a,QString b,QString c,QString d,QString e,QString f)
{
     date=a,flightname=b,departurettime=c,origin=d,destination=e,price=f;


}

void AddFlightDeals:: CollectData()
{


    SetDetails(ui->dateEdit->text(),ui->lineEdit_3->text(),ui->timeEdit->text(),ui->lineEdit_6->text(),ui->lineEdit_8->text(),ui->lineEdit_9->text());



}

void AddFlightDeals::on_pushButton_clicked()
{
    CollectData();
    db.close();
    DatabaseConnections tempdb;
    db=tempdb.ConnectionToDatabase();
    db.open();
    if(!db.isOpen())
    {
        qDebug()<<"Failed to open DB";
        return;

    }
    qDebug()<<date<<flightname<<origin;



    QSqlQuery query;
    query.prepare("INSERT INTO Deals VALUES (?,?,?,?,?,?)");


    query.addBindValue(date);
    query.addBindValue(flightname);
    query.addBindValue(departurettime);
    query.addBindValue(origin);
    query.addBindValue(destination);
    query.addBindValue(price);

    query.exec();


}
