#include "mainmenus.h"
#include "ui_mainmenus.h"

MainMenus::MainMenus(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenus)
{
    ui->setupUi(this);
}

MainMenus::~MainMenus()
{
    delete ui;
}

void MainMenus::on_pushButton_clicked()
{
    AirCraftManagement *A = new AirCraftManagement();
    this->hide();
    A->show();
}

void MainMenus::on_pushButton_2_clicked()
{
    Booking *B = new Booking();
    this->hide();
    B->show();
}

void MainMenus::on_pushButton_3_clicked()
{
    CreditCardDetails *C = new CreditCardDetails();
    this->hide();
    C->show();
}

void MainMenus::on_pushButton_4_clicked()
{
    CustomerDetails *Cus = new CustomerDetails();
    this->hide();
    Cus->show();
}

void MainMenus::on_pushButton_5_clicked()
{
    CustomSearch *CS = new CustomSearch();
    this->hide();
    CS->show();
}

void MainMenus::on_pushButton_6_clicked()
{
        AddFlightDeals *fd=new AddFlightDeals();
        this->hide();
        fd->show();
}

void MainMenus::on_pushButton_7_clicked()
{
        DeleteDeals *dl=new DeleteDeals();
        this->hide();
        dl->show();
}

void MainMenus::on_pushButton_8_clicked()
{
    AirCraftManagement *am = new AirCraftManagement();
    this->hide();
    am->show();
}

void MainMenus::on_pushButton_9_clicked()
{
    DeleteAirCrafts *da=new DeleteAirCrafts();
    this->hide();
    da->show();

}

void MainMenus::on_pushButton_12_clicked()
{
    PrivateJet *pj = new PrivateJet();
    this->hide();
    pj->show();
}

void MainMenus::on_pushButton_10_clicked()
{
    DeletePrivateJets *pj=new DeletePrivateJets();
    this->hide();
    pj->show();
}

void MainMenus::on_pushButton_11_clicked()
{
            FlightAvailability *fa = new FlightAvailability();
            this->hide();
            fa->show();
}

void MainMenus::on_pushButton_14_clicked()
{
    FlightCancellation *fc = new FlightCancellation();
    this->hide();
    fc->show();
}

void MainMenus::on_pushButton_15_clicked()
{
    FlightManagement *fm = new FlightManagement();
    this->hide();
    fm->show();
}

void MainMenus::on_pushButton_13_clicked()
{
    Deals *d = new Deals();
    this->hide();
    d->show();
}
