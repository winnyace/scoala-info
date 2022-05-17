#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{   //CONCATENAREA A n CARACTERE DIN SIRUL S2 LA SF. SIRULUI S1-
    //TRATAREA SIRURILOR CA VECTORI NORMALI CU ELEMENTE DE TIP CARACTER
    char s1[50], s2[50];
    int i, n, j;
    cout << "dati primul sir:" ; cin.get(s1,50); cin.get();
    cout << "dati al doilea sir:"; cin.get(s2, 50);
    for(i = 0; s1[i] != 0; i++);
    cout << "n = "; cin >> n;
    for(j = 0; j < n; j++, i++)
		  s1[i] = s2[j];
    s1[i] = 0;
    cout << endl << "sirul concatenat:" << s1;

    return 0;
}
