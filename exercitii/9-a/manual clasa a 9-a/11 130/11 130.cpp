#include <iostream>

using namespace std;

int main()
{
	// 11 /130 sa se afiseze intervalul cuprins intre a b c si d cu a < b si c < d.
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int i = a; i <= b; i++)
    {
        for(int k = c; k <= d; k++)
        {
            if(i == k)
            {
                cout << endl << k;
            }
        }
    }
    return 0;
}
