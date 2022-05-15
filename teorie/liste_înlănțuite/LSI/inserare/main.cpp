#include <iostream>
#include <fstream>
using namespace std;

struct nod {int info; nod *urm;};

void creare(nod *&prim, nod *&ultim)
{
    ifstream f("lista"); // citesc lista dintr-un fișier. de ce? pentru că vreau doar să demonstrez funcțiile de inserare.
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
    if (prim->urm == NULL) { // întreb dacă nu cumva primul nod este și singurul nod din listă. dacă da...
        prim->urm = nou; // ...pun noul nod după primul nod...
        nou->urm = NULL; // ...spun că după noul nod nu se alfă niciun alt nod..
        ultim = nou; // ...și spun că ultim este, acum, noul nod.
    }
    else { // dacă nu...
        nou->urm = prim->urm; // ...după nou urmează elementul ce se afla inițial după primul element...
        prim->urm = nou; // ...și spun că nou este acum elementul după prim.
    }
}

void inserare_inainte_prim(nod *&prim)
{
    nod *nou = new nod;
    cout << "\ndati un nr intreg care va fi pus inainte de primul nod: "; cin >> nou->info;
    nou->urm = prim; // spun că după nou urmează prim...
    prim = nou; // ...iar prim devine noul nod inserat.
}

void inserare_inainte_ultim(nod *prim, nod *&ultim)
{
    nod *nou = new nod, *p;
    cout << "\ndati un nr intreg care va fi pus inainte de ultimul nod: "; cin >> nou->info;
    for (p = prim; p->urm->urm != NULL; p = p->urm); // merg până la penultimul nod...
    p->urm = nou; // ...spun că după el urmează nou...
    nou->urm = ultim; // ...iar după nod urmează ultimul nod.
}

void inserare_dupa_oarecare(nod *&prim, nod *&ultim)
{
    nod *nou = new nod, *p;
    int val;
    cout << "\ndati o valoarea unui nod: "; cin >> val;
    cout << "dati un nr intreg care va fi pus dupa nodul de valoare " << val << ": "; cin >> nou->info;
    for (p = prim; p->info != val && p != NULL; p = p->urm); // ca să pun un nou nod după un nod oarecare din listă, merg până la el...
    nou->urm = p->urm; // ...spun că după noul nod urmează nodul ce se afla inițial după nodul oarecare dorit...
    p-> urm = nou; // ...și spun că după nodul oarecare dorit urmează noul nod.
}

void inserare_inainte_oarecare(nod *&prim, nod *&ultim)
{
    nod *nou = new nod, *p;
    int val;
    cout << "\ndati o valoare unui nod: "; cin >> val;
    cout << "dati un nr intreg care va fi pus inainte nodul de valoare " << val << ": "; cin >> nou->info;
    for (p = prim; p->urm->info != val && p != NULL; p = p->urm); // ca să pun un nou nod înaintea un nod oarecare din listă, merg până la precedentul acelui nod...
    nou->urm = p->urm; // ...spun că după noul nod urmează nodul precedent inițial al nodului oarecare dorit...
    p->urm = nou; // ...și spun că după că nodul precedent al nodului oarecare dorit este noul nod.
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