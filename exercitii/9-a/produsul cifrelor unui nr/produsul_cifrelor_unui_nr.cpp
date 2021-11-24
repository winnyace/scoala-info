#include <iostream>

using namespace std;

int main()
{
    int no, pc; // no = Numarul Original, pc = Produsul Cifrelor
    cout << "nr = "; cin >> no;
    pc = 1;
    while(no != 0)
    {
        pc = pc * (no % 10); // la fel ca la suma doar ca schimbam semnul. grija insa, nu uita sa adaugi o paranteza la ultima operatie.
        no = no / 10;
    }
    cout << "Produsul cifrelor = " << pc;
    return 0;
}
