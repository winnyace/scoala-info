#include <iostream>
using namespace std;

// pentru graful orientat, avem două feluri de grade: interior și exterior. mai multe informații la destinația teorie/lecții\ integrale/ grafuri
// gradul interior se alfă pe coloana corespunzătoare nodului; gradul exterior pe linia corespunzătoare noduri.

int matr[10][10];

int gradInterior(int n, int nodX)
{
    int nIgrad = 0;
    for (int i = 1; i <= n; i++)
        if (matr[i][nodX] == 1)
            nIgrad++;
    return nIgrad;
}

int gradExterior(int n, int nodX)
{
    int nEgrad = 0;
    for (int i = 1; i <= n; i++)
        if (matr[nodX][i] == 1)
            nEgrad++;
    return nEgrad;
}

int main()
{
    int noduri, muchii, x;
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
    cout << "nodul pentru care o sa spun gradul interior si exterior = "; cin >> x;
    cout << "gradul exterior " << gradExterior(noduri, x) << endl << "gradul interior " << gradInterior(noduri, x);
}
