#include <iostream>
#include <fstream>
using namespace std;

struct nod {int info; nod *urm;};

void creare(nod *&prim, nod *&ultim)
{
    ifstream f("lista");
    int n;
    while (f >> n) {
        nod *nou = new nod;
        nou->info = n;
        if (prim == NULL) {
            prim = nou; 
            prim->urm = NULL; 
            ultim = prim; 
        }
        else {
            nou->urm = NULL; 
            ultim->urm = nou; 
            ultim = nou;
        }
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

void inserare_dupa_prim(nod *&prim, nod *&ultim) 
{
    nod *nou = new nod;
    cout << "\ndati un nr intreg care va fi pus dupa primul nod: "; cin >> nou->info;
    if (prim->urm == NULL) {
        prim->urm = nou;
        nou->urm = NULL;
        ultim = nou;
    }
    else {
        nou->urm = prim->urm;
        prim->urm = nou;
    }
}

void inserare_inainte_prim(nod *&prim)
{
    nod *nou = new nod;
    cout << "\ndati un nr intreg care va fi pus inainte de primul nod: "; cin >> nou->info;
    nou->urm = prim;
    prim = nou;
}

void inserare_inainte_ultim(nod *prim, nod *&ultim)
{
    nod *nou = new nod, *p;
    cout << "\ndati un nr intreg care va fi pus inainte de ultimul nod: "; cin >> nou->info;
    for (p = prim; p->urm->urm != NULL; p = p->urm);
    p->urm = nou;
    nou->urm = ultim;
}

void inserare_dupa_oarecare(nod *&prim, nod *&ultim)
{
    nod *nou = new nod, *p;
    int val;
    cout << "\ndati o valoarea unui nod: "; cin >> val;
    cout << "dati un nr intreg care va fi pus dupa nodul de valoare " << val << ": "; cin >> nou->info;
    for (p = prim; p->info != val && p != NULL; p = p->urm);
    nou->urm = p->urm;
    p-> urm = nou;
}

void inserare_inainte_oarecare(nod *&prim, nod *&ultim)
{
    nod *nou = new nod, *p;
    int val;
    cout << "\ndati o valoare unui nod: "; cin >> val;
    cout << "dati un nr intreg care va fi pus inainte nodul de valoare " << val << ": "; cin >> nou->info;
    for (p = prim; p->urm->info != val && p != NULL; p = p->urm);
    nou->urm = p->urm;
    p->urm = nou;
}

int main()
{
    nod *prim, *ultim;
    prim = new nod; ultim = new nod;
    prim = ultim = NULL;
    creare(prim, ultim); afisare(prim);
    cout << endl;
    inserare_dupa_prim(prim, ultim); afisare(prim);
    cout << endl;
    inserare_inainte_prim(prim); afisare(prim);
    cout << endl;
    inserare_inainte_ultim(prim, ultim); afisare(prim);
    cout << endl;
    inserare_dupa_oarecare(prim, ultim); afisare(prim);
    cout << endl;
    inserare_inainte_oarecare(prim, ultim); afisare(prim);
    return 0;
}