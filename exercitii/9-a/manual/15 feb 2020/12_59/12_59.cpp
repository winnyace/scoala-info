#include <iostream>

using namespace std;

int main()
{
	/* Se citeste de la tastatura k != 0 si un sir de numere n pana la citerea lui 0
	 * sa se afiseze cate numere din sir au suma cifrelor = k. */
	int n, k, i, s = 0, x;
	cout << "dati o val pt k: "; cin >> k;
	cout << "dati o val pt n(0 pt stop): "; cin >> n;
	while (n != 0)
	{
		x = n; // tine minte sa lucrezi cu o variabila de lucru in acest tip de problema.
		while (x != 0)
		{
			s = s + x % 10;
			x = x / 10;
		}
		if (s == k)
			i++;
		cout << "dati o val pt n(0 pt stop): ";cin >> n;
		s = 0;
	}
	cout << i << " ori a aparut k in suma cifrelor unui numar din sir";
	return 0;
}
