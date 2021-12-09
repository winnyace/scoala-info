#include <iostream>
using namespace std;

int main()
{
	//algoritm pt a afla dacă nr este perfect (nr perf = s div prop + 1) sau nu.
	int x, s = 0;
	cout << "o sa aflu daca numarul pe care mi-l dai e perfect."; cin >> x;
	for(int d = 1; d <= x/2; d++)
		if(x % d == 0)
			s = s + d; // aici căutam div prop (nr != 1 și x). deci în loc de un sw, avem s.
	if(s == x) // și doar verificăm dacă e perf sau nu.
        cout << x << " e perfect";
	else
		cout << x << " nu e perfect";
	return 0;
}
