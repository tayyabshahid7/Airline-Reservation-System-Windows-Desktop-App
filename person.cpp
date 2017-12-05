#include "person.h"

Person::Person()
{
     ID=0;
     Name="";
     FatherName="";
     gender="";
     DOB="";
     PhoneNo="";
     address="";

}

void Person::SetDetails(int id,QString n,QString f,QString g ,QString d,QString p,QString a){
    ID=id;

    Name=n;
    FatherName=f;
    gender=g;
    DOB=d;
    PhoneNo=p;
    address=a;


}

