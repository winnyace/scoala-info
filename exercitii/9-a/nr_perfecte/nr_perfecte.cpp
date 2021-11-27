#include <iostream>

using namespace std;

int main()
{
	//algoritm pt a afla daca nr este perfect(nr perf = s div prop + 1) sau nu.
	int x, s = 0;
	cin >> x;
	for(int d = 1; d <= x/2; d++)
	{
		if(x % d == 0)
			s = s + d; // aici cautam div prop (nr != 1 si x). deci in loc de un sw, avem s
	}	
		if(s == x) // si doar verificam daca e perf sau nu.
			cout << x << " e perfect";
		else
			cout << x << " nu e perfect";
	return 0;
}
