#include <iostream>
using namespace std;

int main()
{
    // acest program construiește un număr dintr-o bază Q la baza 10
    int n_bQ, n_b10 = 0, putere = 1, cifra_curenta, baza;
    cout << "dati o baza: "; cin >> baza;
    cout << "dati un numar in baza " << baza << ": "; cin >> n_bQ;

    cout << "numarul " << n_bQ << " in baza 10 este: ";
    while (n_bQ > 0)
    {
        cifra_curenta = n_bQ % 10; // luam ultima cifră din număr
        n_b10 += cifra_curenta * putere; // ultima cifră o înmulțim cu o puture
        putere *= baza; // care crește cu fiecare cifră luată din numărul dat cu baza dată
        n_bQ /= 10;
    }
    cout << n_b10;
}
