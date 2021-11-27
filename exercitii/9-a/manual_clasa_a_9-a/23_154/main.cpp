#include <iostream>

using namespace std;

int main()
{
    // 23 / 154 sa se determine toate tripletele de nr nat care indeplinesc simultan conditiile 1<= x <= y <= z <= n si x * x + y * y = z * z.
    int n, x, y, z;
    cout << "n = " ;cin >> n;
    for(x = 1; x <= n; x++)
    {
        for(y = x; y <= n; y++)
        {
            for(z = y; z <= n; z++)
            {
                if(x * x + y * y == z * z)
                {
                    cout << x << y << z << "\n";
                }
            }
        }
    }

    return 0;
}

