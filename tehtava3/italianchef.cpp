#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(string nimi, int vesi, int jauhot) : Chef(nimi), vedenMaara(vesi), jauhojenMaara(jauhot), kokki(nimi)
{}

string ItalianChef::getName() {
    return kokki;
}

void ItalianChef::makePasta()
{
    cout << kokki << " makes pasta with special recipe"<< endl;
    cout << kokki <<"uses vesi = " << vedenMaara <<endl;
    cout << kokki <<"uses jauhot = " << jauhojenMaara <<endl;
}
