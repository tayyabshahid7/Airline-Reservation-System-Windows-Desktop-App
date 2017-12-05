#ifndef PERSON_H
#define PERSON_H
#include<QString>
#include<QDebug>
class Person
{
protected:
    int ID;
    QString Name;
    QString FatherName;
    QString gender;
    QString DOB;
    QString PhoneNo;
    QString address;

public:
    void SetDetails(int ,QString,QString,QString,QString,QString,QString);
   virtual void CollectData()=0;

    Person();
};

#endif //PERSON_H
