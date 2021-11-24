#include <iostream>
using namespace std;

int main()
{
	//algoritm pt a afla daca un nr este prim sau nu.
	int x, eprim = 1; // eprim este un switch si il setam ca 1 pt adevarat. adica, la inceput, nr dat este 'prim'.
	cout << "dati o valoare: "; cin >> x;
	for(int d = 2; d <= x/2 && eprim == 1; d++) // verificam eprim pentru a iesi mai repede din for.
		if(x % d == 0)
			eprim = 0; // daca se gaseste un div, atunci clar x nu e un nr prim.
	if(eprim == 1)
		cout << x << " e prim";
	else
		cout << x << " nu e prim";
	return 0;
}
