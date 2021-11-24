#include <iostream>
#include <cmath> //math.h sau cmath sunt acelasi lucru.
using namespace std;

int main()
{
    // acest program calculeaza radicalul numarului introdus.
    float num; // folosim un numar de tip float pentru ca multe dintre functiile din cmath lucreaza pe numere de tip float/double.
    cout << "dati un numar: "; cin >> num;

    cout << "radacina patrata a numarului " << num << " este " << sqrt(num) << endl;
    cout << "partea intreaga a numarului " << num << " este " << floor(num) << endl;
    cout << "valoarea absoluta a numarului " << num << " este " << abs(num) << endl;

    // sunt mai multe functii in cmath.
    // https://www.cplusplus.com/reference/cmath/?kw=cmath < link pentru toate functiile din cmath.
    return 0;
}
