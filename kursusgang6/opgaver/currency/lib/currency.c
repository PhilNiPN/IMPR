#include "currency.h"

/*Placer din konverteringsfunktions-implementation her */
const double euro = 0.89;
const double kroner = 6.66;
const double rubler = 66.43;
const double yen = 119.9;

void currency_converter(double dollars, double money[4]) {

    money[0] = dollars * euro;
    money[1] = dollars * kroner;
    money[2] = dollars * rubler;
    money[3] = dollars * yen;

}



