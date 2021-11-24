#include <iostream>
using namespace std;

int main()
{
	int lin, col, suma = 0, produs = 1;
	cout << "voi face suma elementelor pare dintr-o matrice si produs ele. impare din aceiasi matrice.";
	cout << "nr de linii = "; cin >> lin;
	cout << "nr de coloane = "; cin >> col;
	int matr[lin][col];

	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++) {
			cout << "matr[" << i << "][" << j << "] = "; cin >> matr[i][j];
		}

	cout << "elementele din matrice sunt:\n";
	for (int i = 0; i < lin; i++) {
		for (int j = 0; j < col; j++)
			cout << matr[i][j] << " ";
		cout << endl;
	}

	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++)
			if (matr[i][j]%2 == 0)
				suma += matr[i][j];
			else
				produs *= matr[i][j];

	cout << "suma elementelor pare din matrice este " << suma << endl;
	cout << "produsul elementelor impare din matrice este " << produs;
	return 0;
}
