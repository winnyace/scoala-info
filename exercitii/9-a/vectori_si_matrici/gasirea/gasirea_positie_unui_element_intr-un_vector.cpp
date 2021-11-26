#include <iostream>
using namespace std;

int main()
{
	int n, el, i;
	cout << "dimensiunea vectorului: "; cin >> n;
	int a[n];
	for (i = 0; i < n; i++) {
		cout << "un element: "; cin >> a[i];
	}
	cout << "elementul pe care ii doresti positia:"; cin >> el;

	i = 0;
	while(i < n && a[i] != el)
		i++; // mergem prin toate positiile pana gasim elementul
	if (i != n-1)
		cout << "pe positia " << i;
	else
		cout << "nu s-a gasit";
	return 0;
}
