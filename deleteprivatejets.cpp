#include "deleteprivatejets.h"
#include "ui_deleteprivatejets.h"

DeletePrivateJets::DeletePrivateJets(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeletePrivateJets)
{
    ui->setupUi(this);
}

DeletePrivateJets::~DeletePrivateJets()
{
    delete ui;
}

void DeletePrivateJets::on_pushButton_clicked()
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
        query.exec("DELETE FROM privatejet WHERE id = '"+id+"'");


}

void DeletePrivateJets::on_pushButton_2_clicked()
{

    MainMenus* cm=new MainMenus();
    this->hide();
     cm->show();

}

