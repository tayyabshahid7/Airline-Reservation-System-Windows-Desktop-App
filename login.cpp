#include "login.h"
#include "ui_login.h"



Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(512, 379));
    QString servername="RANATAYYABPC";
    QString dbn="AirlineSystem";

    db=QSqlDatabase::addDatabase("QODBC3");
    QString dsn = QString("DRIVER={SQL Server};SERVER=%1;DATABASE=%2;Trusted_Connection=Yes;").arg(servername).arg(dbn);
    db.setDatabaseName(dsn);

    if(db.open())
    {
        db.setConnectOptions();
        //QMessageBox::information(0,"DataBase Connection","Opened");
       // ui->label_5->setText("Created");
    }
    else
    {

       // QMessageBox::critical(0,QObject::tr("Database Error"),db.lastError().text());
     //    ui->label_5->setText("Not Created");
    }


}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_clicked()
{
     MainMenus *mm;
      CustomerMenus * m;
    db.open();

        db.setConnectOptions();




    QString username,password,usertype;
    username=ui->lineEdit_2->text();
    password=ui->lineEdit->text();
    usertype=ui->comboBox->currentText();

    if(!db.isOpen())
    {
        qDebug()<<"Failed to open DB";
        return;

    }
    QSqlQuery qry;
    QString temp="Select username,password from Register where username='"+ username+  "' and password='" +password+ "' and usertype='"+ usertype+ "'";

    qry.exec(temp);

    int count=0;
    while(qry.next())
    {

        count++;
    qDebug()<<count;
    }
    if(count==1)
    {
        if(usertype=="Customer")
        {

        this->hide();
             UserType::SetUserType("Customer");
         m= new CustomerMenus();

        m->show();
        }
        if(usertype=="Administrator")
        {
            this->hide();
            mm=new MainMenus();
           UserType::SetUserType("Administrator");


            mm->show();


        }


    }


    if(count<1)
    {
        //ui->label_5->setText("not good");

    }

    db.close();

}
