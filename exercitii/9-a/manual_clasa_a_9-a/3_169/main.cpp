#include <iostream>
using namespace std;

int main()
{
	// 3/169 să se afiseze cel mic element dintr-un vector și posiția sa.
	int numel, pos, min = 0;
    cout << "o sa gasesc cel mai mic element din vector.\n";
	cout << "cate elemente vrei in vector?\n"; cin >> numel;
	int arr[numel];
	cout << "elementul 0 = "; cin >> arr[0]; min = arr[0]; // luăm primul element pentru a compara cu restul de elemente.
	for (int i = 1; i < numel; i++) {
        cout << "elementul " << i << " = "; cin >> arr[i];
		if (min > arr[i]) {
            min = arr[i];
            pos = i;
        }
    }
    cout << "elementul minim din vector este " << min;
    cout << "\nsi prima positia pe care am gasit el min este " << pos;
	return 0;
}