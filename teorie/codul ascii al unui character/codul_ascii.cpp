#include <iostream>
using namespace std;

int main()
{
    // acest program arata codul ASCII pentru un character introdus de la tastatura
    char c; // char defineste o variabila pentru caractere
    cout << "dati un character: "; cin >> c;
    cout << int(c); // daca transformam c in int, ne va da codul ASCII pentru valorea introdusa mai sus.
    // actiunea de mai sus se numeste casting.
    return 0;
}
