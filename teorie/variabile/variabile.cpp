#include <iostream>
using namespace std;

int main()
{
    /* o variabilă este similar ca o mică cutie: ține minte pentru noi o valoare de un anumit tip.
     * C++ este un limbaj de programare scris static, adică variabilele sunt doar un tip și trebuie specificat tipul acestei variabile.
     * în C++, tipurile cel mai des folosite sunt: int (+ long), float (+ double) char, string (modern), void și bool.
     * vom observa în continuare cum se definesc aceste variabile. */
    int a; // avem o varibilă de tip int. int vine de la integer, adică număr întreg.
    float b; // avem o varibilă de tip float. float vine de la floating point number, adică, mai pe scurt, număr real.
    char c; // avem o varibilă de tip char. char vine de la character, adică un caracter.
    bool s; // avem o varibilă de tip bool. bool vine de la boolean, un tip care poate lua doar valorile adevărat sau fals. în C++, adv. și fals sunt reprezentate prin cifra 1, respectiv 0.

    a = 2;
    b = 2.2;
    c = 'c'; // un caracter are doar apostroafe înconjurând caracterul. pentru un șir, punem ghilimele.
    s = true; // putem scrie false aici sau chiar un număr. dacă numărul este >= 0, atunci e adevărat, altfel e fals.
    cout << a << endl << b << endl << c << endl << s;
}