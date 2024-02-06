#include "asunto.h"
#include <ostream>
using namespace std;


Asunto::Asunto()
{
    cout << "asunto luotu" << endl;
}

void Asunto::maarita(int asukkaat, int neliot)
{
    asukasMaara = asukkaat;
    this->neliot = neliot;
    cout << "Asunto maaritetty asukkaita = " << asukasMaara << " " << "neliota= " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta)
{
    double kulutus = asukasMaara * neliot * hinta;

    return kulutus;
}
