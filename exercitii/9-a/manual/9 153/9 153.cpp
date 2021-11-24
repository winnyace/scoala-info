#include <iostream>

using namespace std;

int main()
{
    //9/153  sa se afiseze cuburile perfecte mai mici decat un nr citit.
    int n, cub;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cub = i * i * i;
        if (cub < n)
            cout << cub << endl;
    }
    return 0;

}
