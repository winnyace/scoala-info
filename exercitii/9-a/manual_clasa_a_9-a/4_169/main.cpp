#include <iostream>
using namespace std;

int main()
{
	// 4/169 să se afiseze nr pare și apoi nr impare dintr-un vector.
    int numel;
    cout << "o să scriu elementele pare și impare dintr-un vector.\n";
    cout << "câte elemente vrei in vector?\n"; cin >> numel;
    int arr[numel];
    for (int i = 0; i < numel; i++) {
        cout << "elementul " << i << " = "; cin >> arr[i];
    }
    cout << "numerele pare din vector:\n";
    for (int i = 0; i < numel; i++)
        if (arr[i]%2 == 0) // împărțirea cu rest a unui număr cu 2 este 0 dacă numărul este par.
            cout << arr[i] << " ";
    cout << "\nnumerele impare din vector:\n";
    for (int i = 0; i < numel; i++)
        if (arr[i]%2 != 0) // dacă dă restul diferent de 0, e clar nu e par.
            cout << arr[i] << " ";
	return 0;
}
