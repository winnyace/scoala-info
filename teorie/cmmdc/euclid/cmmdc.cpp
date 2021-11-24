#include <iostream>
using namespace std;

int main()
{
	// acest program va arata cmmdc-ul dintre doua numere folosit algoritmul lui euclid prin diferenta.
    int a, b;
    cout << "pot sa iti spun cmmdc-ul a doua numere. doar spune numerele.\n";
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    while (a != b)
    {
        if (a > b)
            a = a - b; // doar scade unul din numere cu al doilea.
        else
            b = b - a;
    }
    cout << "cmmdc = " << a; // sau b, ambele numere sunt defapt cmmdc-ul dintre ele.
    return 0;
}
