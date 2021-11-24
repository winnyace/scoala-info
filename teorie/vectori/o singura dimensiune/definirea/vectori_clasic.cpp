#include <iostream>
using namespace std;

int main()
{
	// un vector este defapt o lista de elemente de acelasi tip.
	// metoda de definire de mai jos este rudimentara, fiind folosita in C mai mult, loc de nastere a metodei.

	int dim;
	cout << "dimensiunea vectorului:"; cin >> dim;
	int v[dim]; // salvam RAM asa.

	// citirea elementelor
	for(int i = 1; i <= dim; i++) {
		cout << "elementul " << i << ":"; cin >> v[i];
	}

	// afisarea elementelor
	for(int i  = 1; i <= dim; i++)
		cout << v[i] << " ";
	return 0;
}
