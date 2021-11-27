#include <iostream>

using namespace std;

int main() {
	// 3/169 sa se afiseze cel mic element dintr-un vector si positia sa.
	int n, i, min = 0;
	cout << "cate elemente:" ;cin >> n;
	int arr[n];
	cout << "un element:"; cin >> arr[0]; min = arr[0];
	for(i = 1; i < n; i++) {
		cout << "un element:"; cin >> arr[i];
		if(min > arr[i]) {
			min = arr[i];
		}
	}
	cout << "cel mai mic element:" << min << endl;
	cout << "pozitiile pe care apare:";
	for(i = 0; i < n; i++) {
		if(arr[i] == min) {
			cout << i << " ";
		}
	}
	return 0;		
}

	
