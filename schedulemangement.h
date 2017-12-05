#ifndef SCHEDULEMANGEMENT_H
#define SCHEDULEMANGEMENT_H

#include <QMainWindow>

namespace Ui {
class ScheduleMangement;
}

class ScheduleMangement : public QMainWindow
{
    Q_OBJECT

public:
    explicit ScheduleMangement(QWidget *parent = 0);
    ~ScheduleMangement();

private:
    Ui::ScheduleMangement *ui;
};

#endif // SCHEDULEMANGEMENT_H
