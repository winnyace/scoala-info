#include <iostream>
using namespace std;

int main()
{
	// https://www.w3resource.com/cpp-exercises/array/index.php 1. gaseste cel mai mare element dintr-un array. + pozitia sa.
	int n, i, max;
	cout << "cate elemente:";cin >> n;
	int arr[n];
	cout << "un element:"; cin >> arr[0]; max = arr[0];
	for(i = 1; i < n; i++) {
		cout << "un element:"; cin >> arr[i];
		if(max < arr[i]) {
			max = arr[i];
		}
	}
	cout << endl << "cel mai mare element:" << max << endl;
	cout << "pozitia pe care s-a gasit max:";
	for(i = 0; i < n; i++) {
		if(max == arr[i]) {
			cout << i << " ";
		}
	}
	return 0;
}
