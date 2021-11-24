#include <iostream>

using namespace std;

int main()
{
	/* Se citeste un sir de numere naturale, Sa se afiseze care sunt palimdrome dintre ele. */
	int n, x, xc, invx = 0;
	cout << "dati un numerar natural:"; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		x = i, xc = x;
		while(x != 0)
		{
			invx = invx * 10 + x % 10;
			x = x / 10;
		}
		if (xc == invx)
		{
			cout << endl << invx << " palimdrom pentru " << xc ;
		}
		invx = 0;
	}
	return 0;
}
