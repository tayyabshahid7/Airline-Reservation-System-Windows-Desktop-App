#include "contact.h"
#include "ui_contact.h"

Contact::Contact(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Contact)
{
    ui->setupUi(this);
}

Contact::~Contact()
{
    delete ui;
}


void Contact::on_pushButton_clicked()
{
    DatabaseConnections tempdb;
    db=tempdb.ConnectionToDatabase();
    if(!db.isOpen())
    {
        qDebug()<<"Failed to open DB";
        return;

    }
    CollectData();
    if( email!="" && queries!="")
    {
    QSqlQuery qry;
    QString temp;
    temp= "INSERT INTO contactus VALUES ( '" + email + "' , '" + queries + "')";
    qry.exec(temp);
    }
}


void Contact:: SetDetails(QString e,QString q){


  email=e;
  queries=q;

}


void Contact:: CollectData()
{


    SetDetails(ui->lineEdit_6->text(),ui->plainTextEdit->toPlainText());

}

void Contact::on_pushButton_2_clicked()
{

}
