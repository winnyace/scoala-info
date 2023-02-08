#include <iostream>
using namespace std;

int main()
{
	int dim, i, j, aux;
	cin >> dim;
	int v[dim];
	for(i = 0; i < dim; i++) {
		cout << i+1 << ":"; cin >> v[i];
	}
	for(i = 0; i < dim; i++)
		cout << v[i] << " ";
	cout << endl;
	// sortarea:
	for(i = 0; i < dim-1; i++) // primul for merge pana la penultimul element.
		for(j = i+1; j < dim; j++) // al doilea for merge pana la ultimul
			if(v[j] < v[i]) { // intrebam daca sunt in ordine. ar trebui ca v[i], exact primul element, sa fie mai mic decat al doilea, adica v[j].
				aux = v[i]; // daca sunt le schimba pozitiile.
				v[i] = v[j];
				v[j] = aux;
			}
	cout << endl;
	for(i = 0; i < dim; i++)
		cout << v[i] << " ";
	return 0;
}
