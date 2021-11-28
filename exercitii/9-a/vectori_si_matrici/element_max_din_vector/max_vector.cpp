#include <iostream>
using namespace std;

int main()
{
	// 1. găsesțe cel mai mare element dintr-un vector + poziția sa.
    // sursă: https://www.w3resource.com/cpp-exercises/array/index.php
	int numel, pos, max;
	cout << "câte elemente vrei în vector?\n"; cin >> numel;
	int arr[numel];
	cout << "elementul 0 = "; cin >> arr[0]; max = arr[0]; // luăm primul element pentru a compara cu restul de elemente.
	for (int i = 1; i < numel; i++) {
		cout << "elementul " << i << " = "; cin >> arr[i];
		if (max < arr[i]) {
        	max = arr[i];
            pos = i;
        }
	}
    cout << "elementul maxim din vector este " << max;
    cout << "\nsi prima positie pe care am gasit el max este " << pos;
	return 0;
}
