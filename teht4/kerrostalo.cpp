#include "kerrostalo.h"

kerrostalo::kerrostalo()
{
 cout << "Maaritellaan kerrostalon kaikki asunnot" << endl;

    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();

}

double kerrostalo::laskeKulutus(double hinta)
{
    double ekaKulutus = eka.laskeKulutus(hinta);
    double tokaKulutus = toka.laskeKulutus(hinta);
    double kolmasKulutus = kolmas.laskeKulutus(hinta);

    double kokoTalonKulutus = ekaKulutus + tokaKulutus + kolmasKulutus;
    return kokoTalonKulutus;
}
