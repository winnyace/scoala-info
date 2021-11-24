#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "num = "; cin >> num;

    // mod (%) returneaza restul impartiri la un numar/variabila.
    // numar%10 returneaza ultima cifra. puturile lui zece returneaza ultimele cati de 0 sunt numar.
    cout << num << " % 10 este " << num%10;
    cout << num << " % 100 este " << num%100;

    // div (/) returneaza catul impartiri la un numar/variabila.
    // numar/10 scoate ultima cifra din numar. puturile lui zece scoate cati de 0 sunt in numar.
    cout << num << " / 10 este " << num/10;
    cout << num << " / 100 este " << num/100;

    return 0;
}
