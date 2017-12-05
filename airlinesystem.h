#ifndef AIRLINESYSTEM_H
#define AIRLINESYSTEM_H

#include <QMainWindow>

namespace Ui {
class AirlineSystem;
}

class AirlineSystem : public QMainWindow
{
    Q_OBJECT

public:
    explicit AirlineSystem(QWidget *parent = 0);
    ~AirlineSystem();

private:
    Ui::AirlineSystem *ui;
};

#endif // AIRLINESYSTEM_H
