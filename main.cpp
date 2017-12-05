#include "login.h"
#include "aircraftmanagement.h"
#include "booking.h"
#include "contact.h"
#include "creditcarddetails.h"
#include "customerdetails.h"
#include "customsearch.h"
#include "deals.h"
#include "flightavailability.h"
#include "flightcancellation.h"
#include "flightchangedetails.h"
#include "flightlist.h"
#include "flightmanagement.h"
#include "payment.h"
#include "privatejet.h"
#include "schedulemangement.h"
#include "search.h"
#include "signup.h"
#include "specialdeals.h"
#include"flight.h"
#include"deleteaircrafts.h"
#include"start.h"

#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
        Start S;
        S.show();

    return a.exec();
}
