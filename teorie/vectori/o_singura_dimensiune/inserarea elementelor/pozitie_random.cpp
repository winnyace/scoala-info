#include <iostream>

using namespace std;

int main()
{
	int n, i, k, x;
	cout << "cate elemente:"; cin >> n;
	int v[n];
	for(i = 0; i < n; i++) {
		cout << "un element:"; cin >> v[i];
	}
	cout << "positia pt insera(incepem de la 0):"; cin >> k;
	cout << "elementul inserat:"; cin >> x;
	n = n + 1;
	for(i= n-1;i >= k; i--) { // asa muta elementele unui vector la dreapta.
	    v[i]=v[i-1];
	}
	v[k] = x;
	cout << "noul vector:\n";
	for(i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	return 0;
}
