#include <iostream>

using namespace std;

int main()
{
	/* Se citesc pe rand de la tastatura nr pana se citeste 0.
	 * Sa se afiseze minimul dintre nr. negative citite. */
	int n, min = -1, sw = 0;
	cout << "dati valori negative lui n (0 pt stop): "; cin >> n;	
	if (n > 0)
	{
		cout << "dati valori negative lui n (0 pt stop): "; cin >> n;
	}
	while(n != 0)
	{
		if( n < 0)
		{
			if (min > n)
			{
				min = n;
				sw = 1;
			}
		}
		cout << "dati valori negative lui n (0 pt stop): "; cin >> n;
	}
	if (sw == 1)
	{
		cout << "min = " << min;
	}
	else
	{
		cout << "nu s-au citit numere negative";
	}
	return 0;
}	
