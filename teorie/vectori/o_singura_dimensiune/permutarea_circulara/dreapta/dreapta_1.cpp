#include <iostream>

int main()
{
    // pasul 1: țin minte ultimul element;
    // pasul 2: de la sfarșit la început, mută tot spre dreapta;
    // pasul 3: pe prima poziție, pune elementul salvat.
    int a[5] = {1, 2, 3, 4, 5}, aux, i;

    for (i = 0; i < 5; i++)
        std::cout << a[i] << " ";

    aux = a[5-1]; 
    for (i = 5-1; i > 0; i--)
        a[i] = a[i-1];
    a[0] = aux;

    for (i = 0; i < 5; i++)
        std::cout << a[i] << " ";

    return 0;
}
