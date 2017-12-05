#include "flightmanagement.h"
#include "ui_flightmanagement.h"

FlightManagement::FlightManagement(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FlightManagement)
{
    ui->setupUi(this);
}

FlightManagement::~FlightManagement()
{
    delete ui;
}
void FlightManagement::SetDetails(int f,QString at,QString dt,int a )
{
     flightno=f,aircraftno=a;
     arrivaltime=at,depttime=dt;


}

void FlightManagement::CollectData()
{

    SetDetails(ui->lineEdit_2->text().toInt(),ui->timeEdit->text(),ui->timeEdit_2->text(),ui->lineEdit_6->text().toInt());

}

void FlightManagement::on_pushButton_clicked()
{
    CollectData();
    DatabaseConnections tempdb;
    db=tempdb.ConnectionToDatabase();
    if(!db.isOpen())
    {
        qDebug()<<"Failed to open DB";
        return;

    }
    QSqlQuery query;
    query.prepare("INSERT INTO flightmanagement VALUES (?, ?,?, ?)");



    query.addBindValue( flightno);
    query.addBindValue( arrivaltime);
    query.addBindValue( depttime);
    query.addBindValue(aircraftno);

    query.exec();






}

void FlightManagement::on_pushButton_2_clicked()
{
    QString temp= UserType::getUserType();

    if(temp=="Administrator")
    {


            MainMenus* cm=new MainMenus();
            this->hide();
             cm->show();




    }

}
