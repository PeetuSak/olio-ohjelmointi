#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"


class ItalianChef: public Chef
{
public:
    ItalianChef(string nimi, int vesi, int jauhot);
    string getName();
    void makePasta();

private:
    int vedenMaara;
    int jauhojenMaara;
    string kokki;
};

#endif // ITALIANCHEF_H
