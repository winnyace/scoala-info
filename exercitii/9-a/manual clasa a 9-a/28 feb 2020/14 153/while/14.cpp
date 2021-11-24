#include <iostream>

using namespace std;

int main()
{
	// 14/153 Se citeste un numar natural nenul care poate avea maxim 9 cifre. Afisati cifrele distincte ale numarului
	int n, uc;
	cin >> n;
	while (n != 0)
	{
		uc = n % 10;
		n = n / 10;
		cout << endl << uc;
		if (n % 10 == uc)
		{
			;
		}
		else
		{
			cout << endl << n % 10;
		}
		n /= 10;
	}
	return 0;
}
