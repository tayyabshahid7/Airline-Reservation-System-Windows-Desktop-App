#ifndef AIRPLANETYPE_H
#define AIRPLANETYPE_H
#include<QString>
#include <QMainWindow>

class AirplaneType
{

public:

    AirplaneType();
    virtual void CollectData()=0;
   /* virtual  void  New()=0;
    virtual  void  Modify()=0;
    virtual  void  Delete()=0*/;


protected:

    QString name;
    int ID;




};

#endif // AIRPLANETYPE_H
