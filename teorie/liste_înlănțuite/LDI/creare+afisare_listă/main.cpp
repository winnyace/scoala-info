#include <iostream>
using namespace std;

struct nod {int info; nod *urm, *ant;}; // aceasta este structura normală pentru o listă dublu înlânțuită.

void creare(nod *&prim, nod *&ultim)
{
    nod *nou = new nod;
    cout << "dati un nr intreg (0 pt stop): "; cin >> nou->info;
    while (nou->info != 0) {
        if (prim == NULL) {
            prim = nou;
            prim->urm = NULL;
            prim->ant = NULL;
            ultim = prim;
            // ^ așă legăm noul nod într-o listă dublu înlânțuită dacă nu avem un nod prim.
        }
        else {
            nou->ant = ultim;
            nou->urm = NULL;
            ultim->urm = nou;
            ultim = nou;
            // ^ așa legăm noul nod după ultimul nod dintr-o listă.
        }
        nou = new nod; // pentru că dacă nu am avea aici să fie goal noul nod, aș citi valori eronate, ducând, cel mai probabil la un crash.
        cout << "dati un nr intreg (0 pt stop): "; cin >> nou->info;
    }
}

void afis(nod *prim)
{
    nod *p = prim;
    while (p != NULL) { // putem folosi si un for aici cu: for (nod *p = prim; p != prim; p = p->urm)
        cout << p->info << " ";
        p = p->urm;
    }
}

int main()
{
    nod *prim, *ultim;
    prim = new nod; ultim = new nod;
    prim = ultim = NULL;
    creare(prim, ultim);
    cout << "lista creată:\n"; afis(prim);
    return 0;
}
