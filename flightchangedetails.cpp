#include "flightchangedetails.h"
#include "ui_flightchangedetails.h"

FlightChangeDetails::FlightChangeDetails(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FlightChangeDetails)
{
    ui->setupUi(this);
}

FlightChangeDetails::~FlightChangeDetails()
{
    delete ui;
}
