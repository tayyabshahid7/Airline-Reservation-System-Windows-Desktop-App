#include "schedulemangement.h"
#include "ui_schedulemangement.h"

ScheduleMangement::ScheduleMangement(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ScheduleMangement)
{
    ui->setupUi(this);
}

ScheduleMangement::~ScheduleMangement()
{
    delete ui;
}
