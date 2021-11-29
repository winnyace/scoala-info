#include <iostream>
using namespace std;

// se citește o limită de tip număr natural. să se afiseze care sunt palimdrome de la 1 la limita introdusă inclusiv.

int numInvers(int num) // folosim un sistem similar ca la exercițiul 8/59 din folder-ul 15_feb_2020. explicațiile sunt acolo.
{
    int inv = 0;
    while (num != 0) {
        inv = inv * 10 + num%10;
        num /= 10;
    }
    return inv;
}

bool palimdrom(int num)
{
    int invx = numInvers(num);
    if (invx == num)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout << "voi spune toate numerele palimdrome de la 1 la un numar pe care mi-l dai tu.\n";
    cout << "care este acel numar?\n"; cin >> n;
    for (int i = 1; i <= n; i++)
        if (palimdrom(i) == true)
            cout << i << " ";
    return 0;
}
