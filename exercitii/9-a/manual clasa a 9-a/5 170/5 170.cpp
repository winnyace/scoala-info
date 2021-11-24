#include <iostream>

using namespace std;

int main() {
	//5/170 sa se copiez elementele din vec a in b.
	int n, i;
	cout << "nr de elemente:"; cin >> n;
	int a[n], b[n];
	for(i = 0; i < n; i++) {
		cout << "dati un element:"; cin >> a[i];
		b[i] = a[i];
	}
	for(i = 0; i < n; i++) {
		cout << endl << "elem a:" << a[i] << " elem b:" << b[i];
	}
	return 0;
}
