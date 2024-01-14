#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int numero;
void arvauspeli(){
    srand(time(NULL));
    int satunnaisluku = rand() % 20;

do{
    cout << "Anna luku" << endl;
    cin >> numero;

    if (numero > satunnaisluku){
     cout << "satunnaisluku on pienempi"<< endl;
        }
    else if (numero < satunnaisluku){
    cout << "satunnaisluku on suurempi"<< endl;
        }
    else{
    cout << "numero on oikein"<< endl;
    }

} while (numero != satunnaisluku);


}
int main()
{
arvauspeli();
}
