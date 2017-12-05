#include "customermenus.h"
#include "ui_customermenus.h"

CustomerMenus::CustomerMenus(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CustomerMenus)
{
    ui->setupUi(this);
}

CustomerMenus::~CustomerMenus()
{
    delete ui;
}

void CustomerMenus::on_pushButton_2_clicked()
{
   Booking * book;
    book = new Booking();
    this->hide();

    book->show();
}

void CustomerMenus::on_pushButton_4_clicked()
{
    CustomerDetails * C;
     C = new CustomerDetails();

     this->hide();
     C->show();


}

void CustomerMenus::on_pushButton_11_clicked()
{
    FlightAvailability * A;
    A = new FlightAvailability ();
    this->hide();
    A->show();
}

void CustomerMenus::on_pushButton_14_clicked()
{
     FlightCancel2 *  FC;
      FC = new FlightCancel2 ();
      this->hide();
      FC->show();
}

void CustomerMenus::on_pushButton_5_clicked()
{
    CustomSearch * CS;
    CS= new  CustomSearch ();
    this->hide();
    CS->show();
}

void CustomerMenus::on_pushButton_13_clicked()
{
    Deals *  D;
    D = new  Deals ();
    this->hide();
    D->show();
    //SpecialDeals * SD;
}
