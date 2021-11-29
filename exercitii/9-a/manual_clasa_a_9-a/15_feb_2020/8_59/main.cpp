#include <iostream>
using namespace std;

/* Sa se afiseze toate numerele care sunt palimdrom si care apartin intervalului [a,b].
 * a si b sunt introduse de la tastatura */

int numInvers(int num) // am creat o funcție pentru creerea unui număr invers.
{
    int inv = 0;
    while (num != 0) {
        inv = inv * 10 + num%10;
        num /= 10;
    }
    return inv;
}

bool palimdrom(int num) // și o variabilă, folosit tipul boolean, pentru palidrom, folosind funcția numInvers.
{
    int invx = numInvers(num); // reduc cod facând acest lucru.
    if (invx == num)
        return true;
    else
        return false;
}

// motivul principal pentru acest lucru este că codul este mai ușor de citit, dar și faptul că este mai ușor de rafinat.

int main()
{
	int a, b;
    cout << "voi spune toate numerele care sunt palimdrome dintr-un interval.\n";
    cout << "care sunt extremitatile intervalului?\n"; cin >> a >> b;
	for (int i = a; i <= b; i++)
        if (palimdrom(i) == true)
            cout << i << " ";
	return 0;
}
