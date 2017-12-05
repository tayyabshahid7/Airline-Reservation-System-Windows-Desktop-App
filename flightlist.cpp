#include "flightlist.h"
#include "ui_flightlist.h"

FlightList::FlightList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FlightList)
{
    ui->setupUi(this);
}

FlightList::~FlightList()
{
    delete ui;
}
