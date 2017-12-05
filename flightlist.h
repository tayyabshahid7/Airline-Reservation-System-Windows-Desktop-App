#ifndef FLIGHTLIST_H
#define FLIGHTLIST_H

#include <QMainWindow>

namespace Ui {
class FlightList;
}

class FlightList : public QMainWindow
{
    Q_OBJECT

public:
    explicit FlightList(QWidget *parent = 0);
    ~FlightList();

private:
    Ui::FlightList *ui;
};

#endif // FLIGHTLIST_H
