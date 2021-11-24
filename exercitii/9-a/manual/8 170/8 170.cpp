#include <iostream>

using namespace std;

int main() {
	// 8/170 sa se afiseze inv unui vector.
	int n, i;
	cin >> n;
	int a[n];
	for(i = 0; i < n; i++) {
		cin >> a[i]; 
	}
	for(i = 0; i < n/2; i++) { // ai nevoie de un for aici pentru inv arr.
		int x = a[i];
		a[i] = a[n-i-1]; // acesta e formula
		a[n-i-1] = x; // refolosesti aici formula
	}
	for(i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
