#ifndef FLIGHTCHANGEDETAILS_H
#define FLIGHTCHANGEDETAILS_H

#include <QMainWindow>

namespace Ui {
class FlightChangeDetails;
}

class FlightChangeDetails : public QMainWindow
{
    Q_OBJECT

public:
    explicit FlightChangeDetails(QWidget *parent = 0);
    ~FlightChangeDetails();

private:

    Ui::FlightChangeDetails *ui;
};

#endif // FLIGHTCHANGEDETAILS_H
