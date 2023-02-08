#include <iostream>
using namespace std;

int main()
{
	// inserearea unui element intr-un vector pe prima pozitie.
	int n, i, x;
	cout << "dimensiunea vectorului: "; cin >> n;
	int v[n];
	for(i = 0; i < n; i++) {
		cout << "v[" << i << "] = "; cin >> v[i];
	}

	n = n + 1; // crestem dimensiunea vectorul pentru element. 
	for(i = n-1; i >= 1; i--) {
		v[i] = v[i-1];
	}
	cout << "element care o sa fie inserat pe prima positie = "; cin >> x;
	v[0] = x;
	cout << "noul vector\n";
	for(i = 0; i < n; i++)
		cout << v[i] << " ";
	return 0;
}
