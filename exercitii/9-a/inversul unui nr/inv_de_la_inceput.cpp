#include <iostream>
using namespace std;

int main()
{
    int x = 1234, p = 1, n = 0;
    while (x)
    {
        n += x % 10 * p;
        p *= 10;
        x /= 10;
    }
    cout << n;
}