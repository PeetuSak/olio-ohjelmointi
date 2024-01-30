#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{

    Chef Chef("Jyrki");
    ItalianChef ItalianChef("Mario",100, 250);

    Chef.makeSalad();
    Chef.makeSoup();

    ItalianChef.makePasta();


    return 0;
}
