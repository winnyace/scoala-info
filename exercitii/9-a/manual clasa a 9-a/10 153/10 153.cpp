#include <iostream>

using namespace std;

int main()
{
    //10/153 sa se afiseze nr patratelor perfect mai mici decat un nr citit.
    int n, n2;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        n2 = i * i;
        if (n2 < n)
            cout << n2 << endl;
    }
    return 0;
}
