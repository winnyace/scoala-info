#include <iostream>

using namespace std;

int main()
{
    // 10/130 sa se scrie un mesaj cum sunt cifrele unui nr de 2 cifre ordonate.
    int n, c;
    cout << "n = (maxim de doua cifre)"; cin >> n;
    c = n % 10;
    n /= 10;
    if (n % 10 > c)
        cout << "descrescator";
    else
        cout << "crescator";
    return 0;
}
