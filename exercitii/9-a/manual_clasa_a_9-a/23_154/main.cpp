#include <iostream>
using namespace std;

int main()
{
    // 23/154 să se determine toate tripletele de nr nat care îndeplinesc simultan condițiile 1<= x <= y <= z <= n și x * x + y * y = z * z.
    int n, x, y, z;
    cout << "n = " ;cin >> n;
    for(x = 1; x <= n; x++)
        for(y = x; y <= n; y++)
            for(z = y; z <= n; z++)
                if(x*x + y*y == z*z)
                    cout << x << " " << y << " " << z << endl;
    return 0;
}

