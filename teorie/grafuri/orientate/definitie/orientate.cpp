#include <iostream>
using namespace std;

/* Un graf orientat este un grad care arcele/muchiile orientate, cu direcție, cu sens de parcurgere.
 * Deci, nu pot, spre exemplu, să merg din nodul 1 în 2 dacă eu nu am un arc care pornește din 1 și merge spre 2.
 * Pentru mai multe informații, lecția completă se află la destinația teorie/lectii integrale/grafuri */

int matr[10][10]; // o declarăm global matricea deoarece toată matricea este inițializată cu 0. într-un program mai mare, acestă modalitate de inițializere nu este favorabilă.

int main()
{
    int noduri, muchii;
    cout << "noduri = "; cin >> noduri;
    cout << "muchii = "; cin >> muchii;
    for (int i = 1; i <= muchii; i++) {
        int x, y;
        do {
            cout << "coordonatele muchiei " << i << " sunt\n"; cin >> x >> y;
        } while (!(x >= 1 && x <= noduri && y >= 1 && y <= noduri));
        matr[x][y] = 1;
    }
    for (int i = 1; i <= noduri; i++) {
        for (int j = 1; j <= noduri; j++)
            cout << matr[i][j] << " ";
        cout << endl;
    }
}