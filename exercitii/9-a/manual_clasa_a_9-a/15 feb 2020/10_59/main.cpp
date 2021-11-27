#include <iostream>

using namespace std;

int main()
{
	/* Sa se afiseze toate numerele din intervalul [a,b] care au suma cifrelor un numar par.
	 * a si b se vor citi de la tastatura. */
	int a, b, x, s = 0;
	cout << "dati o val pentru a "; cin >> a;
	cout << "dati o val pentru b "; cin >> b;
	for (int i = a; i <= b; i++)
	{
		x = i;
		while(x != 0)
		{
			s = s + x % 10;
			x = x / 10;
		}
		if (s % 2 == 0)
		{
			cout << endl << "suma "<< s << " pentru " << i;
		}
		s = 0;
	}
	return 0;
}
