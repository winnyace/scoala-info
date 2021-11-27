#include <iostream>

using namespace std;

int main()
{
	/* Sa se afiseze toate numerele care sunt palimdrom si care apartin intervalului [a,b].
	 * a si b sunt introduse de la tastatura */
	int a, b, x, xc, invx = 0;
	cout << "dati o val lui a:"; cin >> a;
	cout << "dati o val lui b:"; cin >> b;
	for (int i = a; i <= b; i++)
	{
		x = i; xc = x;
		while (x != 0)
		{
			invx = invx * 10 + x % 10;
			x = x / 10;
		}
		if (invx == xc)
		{
			cout << endl <<invx << " palimdrom pentru:" << xc;
		}
		invx = 0;
	}
	return 0;
}
