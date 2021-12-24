#include <iostream>
using namespace std;

int matr[10][10];

// gradul unui graf este dat de linia matricei de adiacență corespunzătoare nodului pt care dorim să găsim gradul.
// mai multe informații despre grad se alfă la destinația teorie/lecții\ integrale/grafuri

int grad(int nodX, int n)
{
    int nGrad = 0;
    for (int i = 1; i <= n; i++)
        if (matr[nodX][i] == 1)
            nGrad++;
    return nGrad;
}

int main()
{
    int noduri, muchii, x;
    cout << "noduri = "; cin >> noduri;
    cout << "muchii = "; cin >> muchii;
    for (int i = 1; i <= muchii; i++) {
        int x, y;
        do {
            cout << "coordonatele nodului " << i << " sunt\n"; cin >> x >> y;
        } while (!(x >= 1 && x <= noduri && y >= 1 && y <= noduri) && x == y);
        matr[x][y] = 1;
        matr[y][x] = 1;
    }
    for (int i = 1; i <= noduri; i++) {
        for (int j = 1; j <= noduri; j++)
            cout << matr[i][j] << " ";
        cout << endl;
    }
    cout << "nodul pentru care o sa spun gradul = "; cin >> x;
    cout << grad(x, noduri);
    return 0;
}