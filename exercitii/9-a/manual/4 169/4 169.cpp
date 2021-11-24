#include <iostream>

using namespace std;

int main() {
	// 4 /169 sa se afiseze nr pare si apoi nr impare dintr-un vector.
	int n, i;
	cout << "nr de elemente a listei:"; cin >> n;
	int arr[n];
	for(i = 0;i < n; i++) {
		cout << "un element:"; cin >> arr[i];
	}
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 == 0) {
			cout << arr[i] << " ";
		}
	}
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 != 0) {
			cout << arr[i] << " ";
		}
	}
	return 0;
}
