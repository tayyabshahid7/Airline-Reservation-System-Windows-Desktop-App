#ifndef DELETEPRIVATEJETS_H
#define DELETEPRIVATEJETS_H
#include"databaseconnections.h"
#include"mainmenus.h"
#include"ui_mainmenus.h"

#include <QMainWindow>

namespace Ui {
class DeletePrivateJets;
}

class DeletePrivateJets : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeletePrivateJets(QWidget *parent = 0);
    ~DeletePrivateJets();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:

    Ui::DeletePrivateJets *ui;
    QString id;
     QSqlDatabase db;
};

#endif // DELETEPRIVATEJETS_H
