#include <iostream>
using namespace std;

int main()
{
    // Acest program va compara două numere și îl va alege pe cel mare.
    int a, b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    if (a > b)
	 	cout << "a e max";
    else
        cout << "b e max";
    return 0;
}
