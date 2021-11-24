#include <iostream>
using namespace std;

int main()
{
	int dim, i, j;
	cout << "n:"; cin >> dim;
	int a[dim][dim]; // o matrice patrata are nr de linii = cu cel de coloane

	// citirea:
	for(i = 1; i <= dim; i++)
		for(j = 1; j <= dim; j++) {
			cout << "element pt " << i << " " << j << ":"; cin >> a[i][j];
		}

	// afiserea
	for(i = 1; i <= dim; i++) {
		for(j = 1; j <= dim; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}

	return 0;
}
