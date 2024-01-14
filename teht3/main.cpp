#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int arvaus;
int arvaukset = 0;

int game(int maxnum){
    srand(time(NULL));
    int satunnaisluku = rand() % maxnum + 1;

    do{
        cout << "Anna luku" << endl;
        cin >> arvaus;

        arvaukset++;
        if (arvaus > satunnaisluku){
            cout << "satunnaisluku on pienempi"<< endl;
        }
        else if (arvaus < satunnaisluku){
            cout << "satunnaisluku on suurempi"<< endl;
        }
        else{
            cout << "arvaus on oikein"<< endl;
        }

    } while (arvaus != satunnaisluku);

    return arvaukset;

}
int main()
{
    int maxNumero;
    cout <<"Anna korkein arvattava luku " << endl;
    cin >> maxNumero;
    game(maxNumero);
    cout << "Arvausten maara:" << arvaukset << endl;

    return 0;
}
