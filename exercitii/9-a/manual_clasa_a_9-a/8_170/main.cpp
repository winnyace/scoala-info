#include <iostream>
using namespace std;

int main()
{
	// 8/170 să se afiseze inversul unui vector.
	int numel;
    cout << "o sa invers un vector.\n";
	cout << "cate elemente vrei in vector?\n"; cin >> numel;
	int a[numel];
	for(int i = 0; i < numel; i++) {
	    cout << "elementul " << i << " = "; cin >> a[i];
	}
	for(int i = 0; i < numel/2; i++) { // mergem până la jumătatea vector-ul
        int aux = a[i];
	    a[i] = a[numel-i-1]; // și inversăm.
    	a[numel-i-1] = aux;
	}
	for(int i = 0; i < numel; i++)
		cout << a[i] << " ";
	return 0;
}
