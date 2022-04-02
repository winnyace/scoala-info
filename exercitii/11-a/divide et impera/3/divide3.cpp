#include <iostream>
using namespace std;

// să se afișeze produsul numerelor impare dintr-un vector folosind divide et impera

long produs(int v[], int st, int dr)
{
    if (st == dr)
        if (v[st]%2 != 0)
            return v[st];
        else
            return 1;
    else {
        int m = (st+dr) / 2;
        long p1 = produs(v, st, m);
        long p2 = produs(v, m+1, dr);
        return p1*p2;
    }
}

int main()
{
    int n;
    cout << "num elemente = "; cin >> n;
    int v[n];
    for (int i = 1; i <= n; i++) {
        cout << "v[" << i << "] = "; cin >> v[i];
    }
    cout << produs(v, 1, n);
}
