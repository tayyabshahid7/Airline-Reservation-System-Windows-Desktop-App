#ifndef CONTACT_H
#define CONTACT_H

#include <QMainWindow>
#include"databaseconnections.h"
namespace Ui {
class Contact;
}

class Contact : public QMainWindow
{
    Q_OBJECT

public:
    explicit Contact(QWidget *parent = 0);
    ~Contact();
    void SetDetails(QString o,QString d);
    void CollectData();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    QSqlDatabase db;
    QString email, queries;
    Ui::Contact *ui;
};

#endif // CONTACT_H
