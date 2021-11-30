#include <iostream>
using namespace std;

int main()
{
	// 11/130 să se afiseze elementele cuprinse dintre două elemente cu proprietatea că a < b și c < d.
    int a, b, c, d;
    cout << "voi arăta elementele cupris dintre doua intervale.\n" << "a < b și c < d";
    cout << "\ncare sunt aceste numere?\n"; cin >> a >> b >> c >> d;
    for(int i = a; i <= b; i++)
        for(int k = c; k <= d; k++)
            if(i == k)
                cout << k << endl;
    /* acest algorithm merge pentru motivul că al doilea for este cel care se schimbă cel mai mult.
     * dacă indici de la ambele for-uri sunt la fel, atunci cifra indicelui se află în acel interval.
     * pentru a = 1, b = 10, c = 5 și d = 15, elementele ce se repetă sunt de la 5 la 10. */
    return 0;
}
