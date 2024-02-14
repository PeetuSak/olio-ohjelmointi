#include "katutaso.h"

Katutaso::Katutaso()
{
    cout <<"katutaso luotu"<< endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl kerroksen asuntoja"<< endl;
    as1.maarita(2, 100);
    as2.maarita(2,100);
}

double Katutaso::laskeKulutus(double hinta)
{
    int katuKulutus = 0;

    katuKulutus += as1.laskeKulutus(hinta);
    katuKulutus += as2.laskeKulutus(hinta);


    return katuKulutus;
}
