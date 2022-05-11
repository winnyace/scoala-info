#include <iostream>
#include <fstream>
using namespace std;

struct nod {int info; nod *urm, *ant;};

void creare(nod *&prim, nod *&ultim)
{
    ifstream f("lista"); // am citit lista dintr-un fisier text. de ce? pentru că vreau doar să arat funcțiile de inserare.
    int n;
    nod *nou = new nod;
    while (f >> n) {
        nou->info = n;
        if (prim == NULL) {
            prim = nou;
            prim->ant = NULL;
            prim->urm = NULL;
            ultim = prim;
        }
        else {
            nou->ant = ultim;
            nou->urm = NULL;
            ultim->urm = nou;
            ultim = nou;
        }
        nou = new nod; // nu uita!
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

void inserare_inainte_prim(nod *&prim)
{
    nod *nou = new nod;
    cout << "\ndati un nr intreg care va fi adaugat inaintea primul element al listei: "; cin >> nou->info;
    nou->ant = NULL;
    nou->urm = prim;
    prim = nou;
}

void inserare_dupa_prim(nod *&prim, nod *&ultim)
{
    nod *nou =  new nod;
    cout << "\ndati un nr intreg care va fi adaugat dupa primul element al listei: "; cin >> nou->info;
    if (prim->urm == NULL) {
        nou->urm = NULL;
        nou->ant = prim;
        prim->urm = nou;
        ultim = nou;
    }
    else {
        nou->urm = prim->urm;
        nou->ant = prim;
        prim->urm = nou;
        prim->urm->ant = nou;
    }
}

void inserare_inainte_oarecare(nod *&prim)
{
    nod *p, *nou = new nod;
    int val;
    cout << "\ndati un nr intreg care va fi adaugat inaintea unui nod oarecare al listei: "; cin >> nou->info;
    cout << "dati valoarea nodului oarecare: "; cin >> val;
    for (p = prim; p != NULL && p->info != val; p = p->urm);
    if (p == prim) {
        nou->ant = NULL;
        nou->urm = prim;
        prim = nou;
    }
    else {
        nou->urm = p;
        p->ant->urm = nou;
        nou->ant = p->ant;
        p->ant = nou;
    }
}

void inserare_dupa_oarecare(nod *&prim, nod *&ultim)
{
    nod *p, *nou = new nod;
    int val;
    cout << "\ndati un nr intreg care va fi adaugat dupa unui nod oarecare al listei: "; cin >> nou->info;
    cout << "dati valoarea nodului oarecare: "; cin >> val;
    for (p = prim; p != NULL && p->info != val; p = p->urm);
    if (p == prim) 
        if (prim->urm == NULL) {
            nou->urm = NULL;
            nou->ant = prim;
            prim->urm = nou;
            ultim = nou;
        }
        else {
            nou->urm = prim->urm;
            nou->ant = prim;
            prim->urm = nou;
            prim->urm->ant = nou;
        }
    else {
        nou->urm = p->urm;
        p->urm = nou;
        nou->ant = p;
        p->urm->ant = nou;
    }
}

int main()
{
    nod *prim, *ultim;
    prim = new nod; ultim = new nod;
    prim = ultim = NULL;
    creare(prim, ultim); afisare(prim);
    cout << endl;
    inserare_inainte_prim(prim); afisare(prim);
    cout << endl;
    inserare_dupa_prim(prim, ultim); afisare(prim);
    cout << endl;
    inserare_inainte_oarecare(prim); afisare(prim);
    cout << endl;
    inserare_dupa_oarecare(prim, ultim); afisare(prim);
    return 0;
}