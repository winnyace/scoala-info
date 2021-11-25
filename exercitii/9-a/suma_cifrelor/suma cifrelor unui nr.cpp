#include <iostream>
using namespace std;

int main()
{
    int num, suma = 0;
    cout << "nr = "; cin >> no;
    sc = 0;
    while(no != 0) {
        sc = sc + no % 10; // foarte simplu. suma este suma trecuta( la inceput 0) + ultima cifra al lui no.
        no = no / 10; // pentru a nu aduna acelasi nr pana la moartea universului, vom uita de ultima cifra al lui no asa.
    }
    cout << "suma = " << sc;
    return 0;
}
