#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{
    kerrostalo kerrost;

    int hinta = 1;
    int kulutus = kerrost.laskeKulutus(hinta);

    cout << "Koko kerrostalon kulutus hinnalla " << hinta << ": " << kulutus << endl;

    return 0;
}
