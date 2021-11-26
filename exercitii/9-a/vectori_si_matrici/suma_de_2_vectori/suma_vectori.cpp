#include <iostream>
using namespace std;

int main()
{
	int n, i, x, y;
	cout << "nr de elemente pentru primul vector:"; cin >> n;
	cout << "nr de elemente pentru al doilea vector:"; cin >> x;
	if(n > x)
		y = n;
	else
		y = x;
	int a[n], b[x], c[y];
	for(i = 0; i < n; i++) {
		cout << "un element pt vector 1:"; cin >> a[i];
	}
	for(i = 0; i < x; i++) {
		cout << "un element pt vector 2:"; cin >> b[i];
	}
	cout << "suma celor doi vectori:\n";
	for(i = 0; i < y; i++) {
		c[i] = a[i] + b[i];
		cout << c[i] << " ";
	}
	return 0;
}
