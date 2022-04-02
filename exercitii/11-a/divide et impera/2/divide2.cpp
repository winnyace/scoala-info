#include <iostream>
using namespace std;

// să se afișeze numărul maxim dintr-un vector folosind divide et impera

int max(int vec[], int st, int dr)
{
    if (st == dr)
        return vec[st];
    else {
        int m = (st+dr) / 2;
        int num1 = max(vec, st, m);
        int num2 = max(vec, m+1, dr);
        if (num1 > num2)
            return num1;
        else
            return num2;
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
    cout << max(v, 0, n-1);
    return 0;
}
