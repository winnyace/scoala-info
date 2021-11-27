#include <iostream>

using namespace std;

int main()
{
    // Se citeste un nr de maxim 9 cifre. sa se afiseze cifrele diferite ale n citit.
    int n, c, nc;
    cin >> n;
    for(int i = 0; i <= 9; i++)
    {
        int k = 0; nc = n;
        while (nc != 0)
        {
            c = nc % 10;
            if(c == i)
                k++; // cu k vom vedea daca avem, macar odata cifra citita.
            nc = nc / 10;
        }
        if(k) // daca apare macar odata, vom afisa pe i.
            cout << i <<" ";
    }
