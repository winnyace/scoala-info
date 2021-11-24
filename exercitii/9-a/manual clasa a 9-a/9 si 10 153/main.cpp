#include <iostream>

using namespace std;

int main()
{
    //9/153
    int n, i, kek;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        kek = i * i * i;
        if (kek < n)
            cout << kek << endl;
    }

    //10/153
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        kek = i * i;
        if (kek < n)
            cout << kek << endl;
    }
    return 0;
}
