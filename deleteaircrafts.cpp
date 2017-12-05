#include "deleteaircrafts.h"
#include "ui_deleteaircrafts.h"

DeleteAirCrafts::DeleteAirCrafts(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeleteAirCrafts)
{
    ui->setupUi(this);

}

DeleteAirCrafts::~DeleteAirCrafts()
{
    delete ui;
}

void DeleteAirCrafts::on_pushButton_clicked()
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
   QString ids=ui->lineEdit_2->text();

 query.exec("DELETE FROM aircraftmanagment WHERE aircraftno = '"+ids+"' ");



    qDebug()<<ids;




}

void DeleteAirCrafts:: SetName(QString n)
{
    name=n;

}
void DeleteAirCrafts::SetNo(int id)
{
    ID=id;


}



void DeleteAirCrafts:: CollectData()
{
    SetNo(ui->lineEdit_2->text().toInt());
    SetName(ui->lineEdit_3->text());
   \
}

void DeleteAirCrafts::on_pushButton_2_clicked()
{
    QString temp= UserType::getUserType();

    if(temp=="Administrator")
    {

          MainMenus* cm=new MainMenus();
            this->hide();
             cm->show();




    }

}
