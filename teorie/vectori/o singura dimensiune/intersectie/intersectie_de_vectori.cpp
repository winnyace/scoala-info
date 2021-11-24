#include <iostream>
using namespace std;

int main()
{
	int dim1, dim2, i, j;
	cout << "dimensiunea pentru primului vector = "; cin >> dim1;
	cout << "dimensiunea pentru al doilea vector = "; cin >> dim2;
	int v1[dim1], v2[dim2];

	for(i = 0; i < dim1; i++) {
		cout << "v1[" << i << "] = "; cin >> v1[i];
	}

	for(j = 0; j < dim2; j++) {
		cout << "v2[" << j << "] = "; cin >> v2[j];
	}
	for(i = 0; i < dim1; i++ )
		for(j = 0; j < dim2; j++)
			if(v1[i] == v2[j]) //daca un elem din v == cu unul din j => elem care face parte din intersectia celor 2 vectori.
				cout << v1[i] << " ";
	return 0;
}
