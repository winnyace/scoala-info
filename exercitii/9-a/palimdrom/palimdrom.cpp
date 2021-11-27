#include <iostream>
using namespace std;

int main()
{
    // palimdrom înseamnă că ceva este exact la fel, neavând cont de orientare. 99 este un număr palidrom.
    int num, nouNum = 0, copieNum;
    copieNum = num; // pentru a păstra numărul original.
    cout << "pot sa creeze inversul unui numar. doar spune numarul.\n"; cin >> num;
    while(copieNum != 0) {
        nouNum = nouNum * 10 + num%10;// la început înmultim cu 10 pentru a merge de la ordinul unitățiilor la cel a zecilor, apoi al sutelor, și așa mai departe.
        copieNum /= 10; // am luat ultima cifra din numar. nu mai am nevoie de ea. o elimin.
    }
    if (num == nouNum)
        cout << "numarul este palimdrom.";
    else
        cout << "numarul nu este palimdrom.";
}
