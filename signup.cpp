#include "signup.h"
#include "ui_signup.h"

SignUP::SignUP(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignUP)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(761, 441));


    QString servername="RANATAYYABPC";
    QString dbn="AirlineSystem";

    db1=QSqlDatabase::addDatabase("QODBC3");
    QString dsn = QString("DRIVER={SQL Server};SERVER=%1;DATABASE=%2;Trusted_Connection=Yes;").arg(servername).arg(dbn);
    db1.setDatabaseName(dsn);

    if(db1.open())
    {
        db1.setConnectOptions();
        //QMessageBox::information(0,"DataBase Connection","Opened");
       // ui->label->setText("Created");
    }
    else
    {

        // QMessageBox::critical(0,QObject::tr("Database Error"),db.lastError().text());
      //  ui->label->setText("Not Created");
    }
}

SignUP::~SignUP()
{
    delete ui;
}

void SignUP::on_pushButton_clicked()
{
    QString username,password,user,fname,lname,email,confirm_password,dob;




    username=ui->lineEdit_2->text();
    password=ui->lineEdit->text();
    confirm_password=ui->lineEdit_5->text();
    email=ui->lineEdit_6->text();
    fname=ui->lineEdit_3->text();
    lname=ui->lineEdit_7->text();
    dob=ui->dateEdit->text();
    user=ui->comboBox->currentText();

    qDebug()<<dob;
    if(!db1.isOpen())
    {
        qDebug()<<"Failed to open DB";
        return;

    }
    QSqlQuery qry;
    QString temp="Select username,email from Register";// where username='"+ username+  "' and password='" +password+ "' and users='"+ user+ "'";
    qry.exec(temp);



    int count=0;

    if(password==confirm_password)
    {


        while(qry.next())
        {
            QString temp1=qry.value(0).toString();//.getstring("username");
            QString temp2=qry.value(1).toString();//getstring("email");
            if(temp1==username)
            {
                count++;

            }
            if(temp2==email)
            {
                count++;

            }


        }
        if(count>0)
        {
           // ui->label->setText("Not Good");


        }


        if(count==0)
        {
//            QSqlQuery query;
//               query.prepare("INSERT INTO Register VALUES (?, ?, ?,?,?,?,?)");

//               query.addBindValue( username);
//               query.addBindValue( fname);
//               query.addBindValue(lname);
//               query.addBindValue(password);
//               query.addBindValue(email);
//               query.addBindValue(user);
//               query.addBindValue(dob);

//               query.exec();


         //   ui->label->setText(" good");
            temp= "INSERT INTO Register VALUES ( '" + username + "' , '" + fname + "'   ,   '" + lname + "'  ,  '" + password + "' ,  '" + email + "'   ,    '" + user + "','" + dob + "')";


             qry.exec(temp);

        }
    }
       // db1.close();
    //  Login * Log = new Login();
    //   this->hide();
    //   Log->show();

}
