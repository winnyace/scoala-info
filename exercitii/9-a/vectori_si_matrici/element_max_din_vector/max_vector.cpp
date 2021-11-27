#include <iostream>
using namespace std;

int main()
{
	// 1. găsesțe cel mai mare element dintr-un vector + poziția sa.
    // sursă: https://www.w3resource.com/cpp-exercises/array/index.php
	int n, i, max;
	cout << "câte elemente vrei în vector?\n"; cin >> n;
	int arr[n];
	cout << "elementul 0 = "; cin >> arr[0]; max = arr[0];
	for(i = 1; i < n; i++) {
		cout << "elementul " << i << " = "; cin >> arr[i];
		if(max < arr[i])
        	max = arr[i];
	}
	cout << endl << "cel mai mare element:" << max << endl;
	cout << "pozitia pe care s-a gasit max:";
	for(i = 0; i < n; i++)
		if(max == arr[i])
			cout << i << " ";
	return 0;
}
