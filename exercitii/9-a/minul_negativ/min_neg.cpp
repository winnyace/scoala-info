#include <iostream>
using namespace std;

int main()
{
    // se citesc numere, pe rând, diferite de 0. să se afișeze numărul minim dintre numerele negative.
    int n, min = -1;
    bool sw = false; // teorie la variabile.
    cout << "o sa spune care este minul dintre numerele negative pe care le mi-le dai tu."; cin >> n;
    if (n != 0)
        while (n != 0) {
            if (min > n) {
                sw = true;
                min = n;
            }
            cin >> n;
        }
    else
        cout << "nu s-au citit numere diferite de 0.";

    if (sw == true)
        cout << "min = " << min;
    else
        cout << "nu s-au citit numere negative.";
}