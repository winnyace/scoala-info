#include <iostream>
using namespace std;

int main()
{
	int dim, col, lin;
	cin >> dim;
	int matr[dim][dim];
	for (lin = 1; lin <= dim; lin++)
		for (col = 1; col <= dim; col++) {
			cout << lin << " " << col << ":"; cin >> matr[lin][col];
		}

	for (lin = 1; lin <= dim; lin++) {
		for (col = 1; col <= dim; col++)
			cout << matr[lin][col] << " ";
		cout << endl;
	}

	/* diagonala principala este diagonala cu elemente care au indici de col si lin egali.
	 * putem parcurge, deci diagonala principala prin doua moduri:
	 * 1. de la cap la coada, verificand daca suntem pe diag. prin. tot timpul sau
 	 * 2. mergand cu un sigur for, iteratorul de la for, adica pasi for-ului, la ambii indici ai matrici.
	 * cu a doua metoda, economism spatiu si este mai usor de citit astfel. */

	cout << "elementele de pe diag. principala:\n";
	for (lin = 1; lin <= dim; lin++)
		cout << matr[lin][lin] << " ";
	cout << endl;

	/* diagonala secundara este diag cu elemente care au suma de indici egala cu dim matr - 1; */
	for (lin = 1; lin <= dim; lin++)
		for (col = 1; col <= dim; col++)
			if (lin + col == dim + 1)
				cout << matr[lin][col] << " ";
	return 0;
}
