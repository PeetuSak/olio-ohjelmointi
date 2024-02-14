#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{
    kerrostalo *kerrost = new kerrostalo();

    double hinta = 1;
    double kulutus = kerrost->laskeKulutus(hinta);

    cout << "Koko kerrostalon kulutus hinnalla " << hinta << ": " << kulutus << endl;

    return 0;
}
