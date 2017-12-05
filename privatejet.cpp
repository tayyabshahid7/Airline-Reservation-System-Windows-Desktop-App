#include "privatejet.h"
#include "ui_privatejet.h"

PrivateJet::PrivateJet(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PrivateJet)
{
    ui->setupUi(this);
}

PrivateJet::~PrivateJet()
{
    delete ui;
}

void PrivateJet:: SetNo(int airno)
{
    ID=airno;

}
void PrivateJet:: SetName(QString airname)
{
    name=airname;

}

void PrivateJet::SetLendName(QString Lname)
{
    LendName=Lname;

}
void PrivateJet:: SetLendID(int LID)
{
    LendID=LID;

}


void PrivateJet:: CollectData()
{
    SetNo(ui->lineEdit_4->text().toInt());
    SetName(ui->lineEdit_2->text());
    SetLendName(ui->lineEdit_3->text());
    SetLendID(ui->lineEdit_5->text().toInt());

}


void PrivateJet::on_pushButton_clicked()
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
    query.prepare("INSERT INTO privatejet VALUES (?, ?,?, ?)");



    query.addBindValue( ID);
    query.addBindValue( name);
    query.addBindValue( LendName);
    query.addBindValue(LendID);

    query.exec();


}

void PrivateJet::on_pushButton_2_clicked()
{
    QString temp= UserType::getUserType();





           MainMenus *cm=new MainMenus();
            this->hide();
             cm->show();





}

void PrivateJet::on_pushButton_3_clicked()
{
    CollectData();
    qDebug()<<LendName;

}
