#include <iostream>
#include <fstream>
using namespace std;

struct nod {int info; nod *urm, *ant;};

void creare(nod *&prim, nod *&ultim)
{
    ifstream f("lista"); // am citit lista dintr-un fisier text. de ce? pentru că vreau doar să arat funcțiile de stergere.
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

void sterg(nod *&prim, nod *&ultim)
{
    nod *p; 
    int val;
    cout << "dati valoarea nodului pe care o sa-l sterg: "; cin >> val;
    for (p = prim; p != NULL && p->info != val; p = p->urm);
    if (p == prim) {
        prim = prim->urm; // așa ștergem primul nod dintr-o listă
        prim->ant = NULL;
        delete p;
    }
    else if (p == ultim) {
        ultim = ultim->ant; // așa ștergem ultimul nod dintr-o listă
        ultim->urm = NULL;
        delete p;
    }
    else {
        p->ant->urm = p->urm; // si așa ștergem un nod din interior. 
        p->urm->ant = p->ant; // toate au la bază faptul că rup legăturile din ambele părți ale nodului, unde e posibil, bineînțeles.
        delete p;
    }
}

int main()
{
    nod *prim, *ultim;
    prim = new nod; ultim = new nod;
    prim = ultim = NULL;
    creare(prim, ultim); afisare(prim);
    cout << endl;
    sterg(prim, ultim); afisare(prim);
    return 0;
}