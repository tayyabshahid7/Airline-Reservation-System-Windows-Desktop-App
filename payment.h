#ifndef PAYMENT_H
#define PAYMENT_H

#include <QMainWindow>

namespace Ui {
class Payment;
}

class Payment : public QMainWindow
{
    Q_OBJECT

public:
    explicit Payment(QWidget *parent = 0);
    ~Payment();

private:
    Ui::Payment *ui;
};

#endif // PAYMENT_H
