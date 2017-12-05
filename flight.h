#ifndef FLIGHT_H
#define FLIGHT_H
#include "ui_deals.h"
#include"deals.h"
#include"specialdeals.h"
#include"flightavailability.h"
#include"ui_flightavailability.h"
#include"ui_specialdeals.h"
#include"flightmanagement.h"
#include"ui_flightmanagement.h"

#include<QString>


class Flight
{

Deals *d;
SpecialDeals *sd;
FlightAvailability *fa;
FlightManagement *fm;
QString origin;
QString destination;
QString journeydate;




public:

    Flight();
    void CollectData();

};

#endif // FLIGHT_H
