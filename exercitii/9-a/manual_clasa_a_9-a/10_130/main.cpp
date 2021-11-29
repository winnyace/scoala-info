#include <iostream>
using namespace std;

int main()
{
    // 10/130 să se scrie un mesaj cum sunt cifrele unui nr de 2 cifre ordonate.
    int num, c;
    cout << "o sa spun cum sunt cifrele unui numar cu maxim doua cifre.\n";
    do {
        cout << "num = "; cin >> num;
    } while (num <= 0 || num >= 99);
    c = num%10;
    num /= 10;
    if (num%10 > c)
        cout << "cifrele sunt descrescatore.";
    else if (num%10 < c)
        cout << "cifrele sunt crescatoare.";
    else if (num%10 == c)
        cout << "cifrele sunt egale.";
    return 0;
}
