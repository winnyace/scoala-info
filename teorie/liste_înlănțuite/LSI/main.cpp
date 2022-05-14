#include <iostream>
using namespace std;

struct nod {int info; nod *urm;}; // așa arată structura unui nod simplu. are doar informația utilă și putem merge doar de la primul spre ultimul.

void creare(nod *&prim, nod *&ultim)
{
    nod *nou = new nod; // new este un cuvânt reservat în C++. prin new, noi alocăm spațiu de memorie pentru o variabilă, în acest caz, pentru o variabilă de tip nod, definită mai sus.
    cout << "dati un nr intreg (0 pt stop): "; cin >> nou->info;
    while (nou->info != 0) {
        if (prim == NULL) {
            prim = nou; // spun că nou este prim
            prim->urm = NULL; // fiind primul și singurul nod din listă, 
            ultim = prim; // nu mai urmează nimic după el.
        }
        else {
            nou->urm = NULL; // punem noul nod după ultimul, deci, după noul nod nu urmează nimic
            ultim->urm = nou; // pentru a lega noul nod de listă
            ultim = nou; // fiind pus după, noul nod devine noul ultim din listă
        }
        nou = new nod; // pentru că am terminat cu valoarea citită anterior, trebuie să ne facem spațiu pentru o nouă valoare.
        cout << "dati un nr intreg (0 pt stop): "; cin >> nou->info;
    }
}

void afisare(nod *prim)
{
    nod *p = prim;
    cout << "\nlista curenta este: ";
    while (p != NULL) {
        cout << p->info << " ";
        p = p->urm;
    }
}

int main()
{
    nod *prim, *ultim;
    prim = new nod; ultim = new nod;
    prim = ultim = NULL;
    creare(prim, ultim); afisare(prim);
    return 0;
}