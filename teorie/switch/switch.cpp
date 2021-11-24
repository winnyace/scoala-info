#include <iostream>
using namespace std;

int main()
{
	// switch este un if elegant. functioneaza doar pentru constante.
    int a, b;
    char e;
    cout << "nr a = "; cin >> a;
	cout << "nr b = "; cin >> b;
	cout << "alegeti un operator de calcul de ordinul 1: "; cin >> e;

    switch (e) {
    case '+':
        cout << a+b;
        break; // break pentru a iesi din switch si nu a intra in alte case-uri.
    case '-':
        cout << a-b;
        break;
    default: // default este case-ul standard daca toate optiunile de mai sus nu exista.
        cout << "de ordinul 1 trebuia.";
        break;
    }

    return 0;
}
