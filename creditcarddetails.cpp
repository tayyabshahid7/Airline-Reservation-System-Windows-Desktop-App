#include "creditcarddetails.h"
#include "ui_creditcarddetails.h"

CreditCardDetails::CreditCardDetails(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreditCardDetails)
{
    ui->setupUi(this);
}


void CreditCardDetails::EnterCardNo(int cardno)
{
     CardNo=cardno;
}

void CreditCardDetails::EnterCardType(QString cardtype)
{

    CardType=cardtype;

}

void CreditCardDetails::EnterExpiryDate(QString expirydate)
{

     ExpiryDate=expirydate;
}




CreditCardDetails::~CreditCardDetails()
{
    delete ui;
}

void CreditCardDetails::on_pushButton_clicked()
{

    EnterCardNo(ui->lineEdit_2->text().toInt());
    EnterCardType(ui->comboBox->currentText());
    EnterExpiryDate(ui->dateEdit->text());


    DatabaseConnections tempdb;
    db=tempdb.ConnectionToDatabase();
    db.open();
    if(!db.isOpen())
    {
        qDebug()<<"Failed to open DB";
        return;

    }



    QSqlQuery query;
    query.prepare("INSERT INTO creditcard VALUES (?, ?, ?)");


    query.addBindValue( CardNo);
    query.addBindValue( CardType);
    query.addBindValue(ExpiryDate);

    query.exec();



}

void CreditCardDetails::on_pushButton_2_clicked()
{
    QString temp= UserType::getUserType();

    qDebug()<<temp;
    if(temp=="Administrator")
    {


           MainMenus *cm=new MainMenus();
            this->hide();
             cm->show();




    }

}
