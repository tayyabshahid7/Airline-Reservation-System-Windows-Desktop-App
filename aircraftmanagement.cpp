#include "aircraftmanagement.h"
#include "ui_aircraftmanagement.h"

AirCraftManagement::AirCraftManagement(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AirCraftManagement)
{
    ui->setupUi(this);
}

void AirCraftManagement:: SetNo(int airno)
{
    ID=airno;

}
void AirCraftManagement:: SetName(QString airname)
{
    name=airname;

}

void AirCraftManagement:: SetBusiness(int b)
{

    MaxBusinessClass=b;


}

void AirCraftManagement:: SetExecutive(int x)
{
    MaxExecutiveClass=x;


}

void AirCraftManagement:: SetEconomy(int e)
{
    MaxEconomyClass=e;

}



void AirCraftManagement:: CollectData()
{
    SetNo(ui->lineEdit_2->text().toInt());
    SetName(ui->lineEdit_3->text());
    SetBusiness(ui->lineEdit_7->text().toInt());
    SetEconomy(ui->lineEdit_6->text().toInt());
    SetExecutive(ui->lineEdit_8->text().toInt());

}




AirCraftManagement::~AirCraftManagement()
{
    delete ui;
}

void AirCraftManagement::on_pushButton_clicked()
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
    query.prepare("INSERT INTO aircraftmanagment VALUES (?, ?, ?,?,?)");

    query.addBindValue( ID);
    query.addBindValue( name);
    query.addBindValue(MaxBusinessClass);
    query.addBindValue(MaxExecutiveClass);
    query.addBindValue(MaxEconomyClass);


    query.exec();





    qDebug()<<ID;
}


void AirCraftManagement::on_pushButton_2_clicked()
{
    QString temp= UserType::getUserType();




            MainMenus* cm=new MainMenus();
            this->hide();
             cm->show();
}

void AirCraftManagement::on_pushButton_3_clicked()
{







}
