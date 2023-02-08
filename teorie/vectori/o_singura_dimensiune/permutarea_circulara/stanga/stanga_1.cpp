#include <iostream>
using namespace std;

int main()
{
	int dim, aux;
	cout << "dimensiunea vectorului = "; cin >> dim;
	int v[dim];
	for(int i = 0 ; i < dim; i++) {
		cout << "v[" << i << "] = "; cin >> v[i];
	}
	cout << "vectorul normal:\n";
	for (int i = 0; i < dim; i++)
	    cout << v[i] << " ";

 	cout << "\nvectorul permutat cu 1 la stanga:\n";
	aux = v[0];
	for(int i = 0; i < dim-1; i++)
		v[i] = v[i+1];
	v[dim-1] = aux;

	for(int i = 0; i < dim; i++)
		cout << v[i] << " ";
	return 0;
}
