#include <iostream>
#include <array> // acesta librarie ne ofera o interfata similara cu un container.
using namespace std;

int main()
{
    array<int, 5> v;
    for (auto& i : v) { // auto este un keyword in C++ ce scurteaza multa syntaxa pentru noi uneori.
        cout << "elementul de pe positia " << i << " = "; cin >> i; // i este un pointer aici.
    } // auto scurteaza aici definitia lui i ca si un iterator care merge de la incepului lui pana la sfarsit.

    for (auto& i : v)
        cout << i << " ";
    /* acesta este varianta moderna de a folosi un array in C++, oferind multe avantaje.
     * avem o forma de error checking pentru indexarea unui element.
     * faptul ca este un container, multe functii din libraria algorithm sunt disponibile acum, sporind efficienta noastra. */
}
