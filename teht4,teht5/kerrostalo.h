#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"

class kerrostalo
{
public:
    kerrostalo();

    double laskeKulutus(double hinta);


private:

    Katutaso eka;
    Kerros toka;
    Kerros kolmas;


};

#endif // KERROSTALO_H
