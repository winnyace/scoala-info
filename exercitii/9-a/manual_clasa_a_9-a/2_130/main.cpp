#include <iostream>
using namespace std;

int main()
{
    // 2/130 să se calculeze lungimea (2*raza) și aria (pi*raza*raza) unui cerc cu raza dat de la tastatură.
    int raza;
    float aria, lungimea, PI = 3.14;
    cout << "voi calcula lungimea si aria unui cerc. doar spune-mi raza.\n"; cin >> raza;
    aria = PI*(raza*raza);
    lungimea = 2*raza;
    cout << aria;
    cout << endl << lungimea;
    return 0;
}
