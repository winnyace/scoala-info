#include <iostream>
using namespace std;

int main()
{
    // acest program construiește un numar din baza 10 la o bază dată
    int n_b10, baza, n_bQ = 0, puture = 1, cifra_curenta;
    cout << "dati un numar in baza 10: "; cin >> n_b10;
    cout << "dati o baza: "; cin >> baza;

    cout << "\nnumarul " << n_b10 << " din baza 10, transformat în baza " << baza << " este: ";
    while (n_b10 != 0) 
    {
        cifra_curenta = n_b10 % baza; // luăm restul la bază
        n_bQ += puture * cifra_curenta; // îl putem în numărul nostru
        n_b10 /= baza; // și continuăm operația
        puture *= 10; 
    }
    cout << n_bQ; 
    return 0;
}
