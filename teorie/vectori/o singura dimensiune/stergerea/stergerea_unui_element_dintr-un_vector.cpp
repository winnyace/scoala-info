#include <iostream>
using namespace std;

int main ()
{
	int dim, i, pos;
	cout << "dimensiunea vectorului = "; cin >> dim;
	int v[dim];
	for(i = 0; i < dim; i++) {
		cout << "un elemente:"; cin >> v[i];
	}
	
	cout << "pozitia pe care nu o mai vrei(de la 0 se numara):"; cin >> pos;
	for(i = pos; i < dim-1; i++)
		v[i] = v[i+1]; // aici se intampla magia. pur si simplu toate elemente cu un element la stanga.
	dim = dim - 1; //dim se scade si el cu 1 ca sa nu avem probleme de afisare.

	for(i = 0; i < dim; i++)
		cout << v[i] << " ";
	return 0;
}
