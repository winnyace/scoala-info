#include <iostream>
using namespace std;

int main()
{
    // acest program, folosind mod și div, facem produsul cifrelor unui nr.
    int num, produs = 1;
    cout << "o sa fac produsul cifrelor unui numar. doar spune numarul.\n"; cin >> num;
    while (num != 0) {
        // div/10 scapă de ultima cifră. când nu mai avem cifre, numărul devine 0.
        produs *= num%10;
        num /= 10;
    }
    cout << "produsul cifrelor numărului este " << produs;
    return 0;
}
