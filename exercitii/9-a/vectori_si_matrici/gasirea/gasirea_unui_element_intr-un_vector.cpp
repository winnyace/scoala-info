#include <iostream>

using namespace std;

int main() {
	int i, n, x;
	cout << "cate elemente:"; cin >> n;
	int a[n];
	for(i = 0; i < n; i++) {
		cout << "element:"; cin >> a[i];
	}
	cout << "ce element sa caut:"; cin >> x;
	for(i = 0; i < n; i++) {
		if(a[i] == x) {
			cout << "gasit";
			break;
		}
	}
	return 0;
}
