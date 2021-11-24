#include <iostream>
using namespace std;

int main()
{
	int linii, coloane, i, j;
	cout << "linii:"; cin >> linii;
	cout << "coloane: "; cin >> coloane;
	int a[coloane][linii]; // o matrice este defapt un vector multidimensional, sau o fila noua in excel.

	// citirea unei matrici
	for(i = 1; i <= coloane; i++) // pt o matrice avem nevoie de doua for-uri.
		for(j = 1; j <= linii; j++) {
			cout << "element pt " << i << " "<< j << ":"; cin >> a[i][j];
		}

	// afisarea unei matrici
	for(i = 1; i <= coloane; i++) {
		for(j = 1; j <= linii; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
