#include <iostream>
using namespace std;

/* Un graf neorientate este format din noduri/vârfuri și arce/muchii.
 * Aceste grafuri pot reprezenta structuri și obiecte din viața reală și relații între ele.
 * Pentru mai multe informații, lecția completă este la destinația teorie/lecții\ intregrale/grafuri */

int matr[10][10];  // o declarăm global matricea deoarece toată matricea este inițializată cu 0. într-un program mai mare, acestă modalitate de inițializere nu este favorabilă.

int main()
{
    int noduri, muchii;
    cout << "noduri = "; cin >> noduri;
    cout << "muchii = "; cin >> muchii;
    for (int i = 1; i <= muchii; i++) {
        int x, y;
        do {
            cout << "coordonatele muchiei " << i << " sunt\n"; cin >> x >> y;
        } while (!(x >= 1 && x <= noduri && y >= 1 && y <= noduri) || y == x);
        matr[x][y] = 1;
        matr[y][x] = 1; // matricea unui graf neorientate este simetrică față de diag. prin.
    }
    for (int i = 1; i <= noduri; i++) {
        for (int j = 1; j <= noduri; j++)
            cout << matr[i][j] << " ";
        cout << endl;
    }
}