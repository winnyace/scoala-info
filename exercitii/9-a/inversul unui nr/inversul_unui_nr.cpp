#include <iostream>
using namespace std;

int main()
{
    // acest program va crea inversul numarului care user-ul la scris.
    int num, nouNum;
    nouNum = 0;
    cout << "pot sa creeze inversul unui numar. doar spune numarul.\n"; cin >> num;
    while(num != 0) {
        nouNum = nouNum * 10 + num%10;// la început înmultim cu 10 pentru a merge de la ordinul unitățiilor la cel a zecilor, apoi al sutelor, și așa mai departe.
        num /= 10; // am luat ultima cifra din numar. nu mai am nevoie de ea. o elimin.
    }
    cout << "inversul numarului " << num << " este " << nouNum;
    return 0;
}
