#include <iostream>
using namespace std;

// să se afișeze suma unui vector folosind divide et impera

int suma(int vec[], int st, int dr)
{
    if (st == dr)
        return vec[st];
    else {
        int m = (st+dr) / 2;
        int s1 = suma(vec, st, m);
        int s2 = suma(vec, m+1, dr);
        return s1 + s2;
    }
}

int main()
{
    int n;
    cout << "num elemente: "; cin >> n; 
    int v[n];
    for (int i = 0; i < n; i++) {
        cout << "v[" << i+1 << "] = "; cin >> v[i];
    }
    cout << suma(v, 0, n-1);
}
