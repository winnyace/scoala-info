#include <iostream>

using namespace std;

int main()
{
    int no, sc; // no = Numarul Original, sc = Suma Cifrelor
    cout << "nr = "; cin >> no;
    sc = 0;
    while(no != 0)
    {
        if (no%10%2 != 0) // adaugam acest if pentru a vedea daca ultima cifra a nr primit este para sau nu.
            sc = sc + no % 10;
        no = no / 10; // grija sa nu bagi acesta conditie in if. daca o bagi, programul va merge pana la moartea pamantului.
    }
    cout << "suma cifrelor impare = " << sc;
    return 0;
}
