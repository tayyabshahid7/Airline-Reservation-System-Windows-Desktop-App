#include "customerdetails.h"
#include "ui_customerdetails.h"

CustomerDetails::CustomerDetails(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CustomerDetails)
{
    ui->setupUi(this);
}

CustomerDetails::~CustomerDetails()
{
    delete ui;
}



void CustomerDetails:: CollectData()
{
        QString temp;
        if(ui->radioButton->isChecked())
        {
            temp="Male";

        }
        else if(ui->radioButton_2->isChecked())
        {
            temp="Female";
        }

    SetDetails(ui->lineEdit_2->text().toInt(),ui->lineEdit_3->text(),ui->lineEdit_7->text(),temp,ui->dateEdit->text(),
               ui->lineEdit_8->text(),ui->plainTextEdit->toPlainText());



    DatabaseConnections tempdb;
    db=tempdb.ConnectionToDatabase();
    db.open();
    if(!db.isOpen())
    {
        qDebug()<<"Failed to open DB";
        return;

    }



    QSqlQuery query;
    query.prepare("INSERT INTO customerdetails VALUES (?, ?, ?,?,?,?,?)");


    query.addBindValue( ID);
    query.addBindValue( Name);
    query.addBindValue(FatherName);
    query.addBindValue(gender);
    query.addBindValue(DOB);
    query.addBindValue(PhoneNo);
    query.addBindValue(address);
    query.exec();



}

void CustomerDetails::on_pushButton_clicked()
{
    CollectData();
    qDebug()<<gender;
}

void CustomerDetails::on_pushButton_2_clicked()
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

void CustomerDetails::on_pushButton_3_clicked()
{
    CustomersFromDB *  cm=new CustomersFromDB();
    this->hide();
     cm->show();

}
