#include <iostream>
using namespace std;

int main()
{
    int n, k, aux;
    cout << "dimensiunea matr patr = "; cin >> n;
    int matr[n][n];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cout << "matr[" << i << "][" << j << "] = "; cin >> matr[i][j];
        }

    cout << "matricea introdusa:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << matr[i][j] << " ";
        cout << endl;
    }
    
    cout << "\nk = "; cin >> k;
    int n2 = k-1;
    int v[n2];
    for (int i = 1; i <= n2; i++)
        v[i] = matr[k][i];
    aux = v[n2];
    for (int i = n2-1; i >= 1; i--)
        v[i+1] = v[i];
    v[1] = aux;
    for (int i = 1; i <= n2; i++)
        matr[k][i] = v[i];

    cout << "matricea cu elementele sub diag prin de pe linia k:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << matr[i][j] << " ";
        cout << endl;
    }
}
