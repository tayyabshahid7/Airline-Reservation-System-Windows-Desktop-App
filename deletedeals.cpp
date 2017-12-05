#include "deletedeals.h"
#include "ui_deletedeals.h"

DeleteDeals::DeleteDeals(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeleteDeals)
{
    ui->setupUi(this);
}

DeleteDeals::~DeleteDeals()
{
    delete ui;
}
void DeleteDeals::on_pushButton_clicked()
{
    id=ui->lineEdit_3->text();
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
        query.exec("DELETE FROM Deals WHERE id = '"+id+"'");


}

void DeleteDeals::on_pushButton_2_clicked()
{

    MainMenus* cm=new MainMenus();
    this->hide();
     cm->show();

}
