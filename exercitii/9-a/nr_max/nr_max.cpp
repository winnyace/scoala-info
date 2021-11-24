#include <iostream>
using namespace std;

int main()
{
    // Acest program va compara doua numere si il va alge pe cel maxim.
    int a, b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    if (a > b)
	 	cout << "a e max";
    else
        cout << "b e max";
    return 0;
}
