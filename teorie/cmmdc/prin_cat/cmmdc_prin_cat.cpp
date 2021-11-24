#include <iostream>
using namespace std;

int main()
{
    // acest program afla cmmdc dinte doua numere si il afiseaza.
    // folosim algoritmul lui euclid prin cat.
    int a, b, r;
    cout << "pot sa iti spun cmmdc-ul a doua numere. doar spune numerele.\n";
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    cout << "cmmdc = " << a;
    return 0;
}
