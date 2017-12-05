#include "airlinesystem.h"
#include "ui_airlinesystem.h"

AirlineSystem::AirlineSystem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AirlineSystem)
{
    ui->setupUi(this);
}

AirlineSystem::~AirlineSystem()
{
    delete ui;
}
