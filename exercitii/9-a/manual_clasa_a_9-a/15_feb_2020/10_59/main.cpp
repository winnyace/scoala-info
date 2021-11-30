#include <iostream>
using namespace std;
/* Sa se afiseze toate numerele din intervalul [a,b] care au suma cifrelor un numar par.
 * a si b se vor citi de la tastatura. */

int sumaCifre(int num)
{
    int suma = 0;
    while (num != 0) {
        suma += num%10;
        num /= 10;
    }
    return suma;
}

bool sumaPara(int num)
{
    int suma = sumaCifre(num);
    if (suma%2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int a, b;
    cout << "voi spune ce numere din intervalul [a, b] au suma cifrelor para.\n";
    cout << "care este acel interval?\n"; cin >> a >> b;
    for (int i = a; i <= b; i++)
        if(sumaPara(i) == true)
            cout << i << " ";
	return 0;
}