#include <iostream>
using namespace std;

int x[10], n;

void afis()
{
    for (int j = 1; j <= n; j++)
        cout << x[j] << " ";
    cout << endl;
}

bool ok(int k)
{
    for (int i = 1; i < k; i++)
        if (x[k] == x[i])
            return false;
    return true;
}

bool solutie(int k)
{
    return k == n;
}

void back(int k)
{
    for (int i = 1; i <= n; i++) {
        x[k] = i;
        if (ok(k))
            if (solutie(k))
                afis();
            else
                back(k+1);
    }
}

int main()
{
    cout << "n = "; cin >> n;
    back(1);
    return 0;
}