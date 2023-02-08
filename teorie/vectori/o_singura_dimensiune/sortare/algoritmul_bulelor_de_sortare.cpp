#include <iostream>

using namespace std;

int main()
{
	int dim, i, aux, terminat;
	cin >> dim;
	int v[dim];
	for(i = 0; i <= dim-1; i++) {
		cout << i << ":"; cin >> v[i];
	}
	for(i = 0; i <= dim-1; i++)
		cout << v[i] << " ";
	// sortarea:
	do {
 		terminat = 1; // presupunem ca vectorul e deja sortat, dar tot verificam
 		for(i = 0; i < dim-1; i++) // mergem doar pana la penultimul pt ca avem un i+1 in for nostru. deci nu avem nevoie
 			if(v[i] > v[i+1]) { // verificam elementele. primul ar trebui sa fie mai mic.
 				aux = v[i]; // daca nu e, le schimbam intre ele.
 				v[i] = v[i+1];
 				v[i+1] = aux;
				terminat = 0; // predictia noastra nu a fost buna, deci schimbam acest semafor.
			}
 	} while (terminat == 0);
	cout << endl;
	for(i = 0; i <= dim-1; i++)
		cout << v[i] << " ";
	return 0;
}
