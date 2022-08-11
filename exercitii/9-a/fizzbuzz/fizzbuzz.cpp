#include <iostream>
using namespace std;

int main()
{
    /*
    * fizzbuzz este o întrebare standard din multe interview-uri de programare.
    * intrebarea nu este grea, însă poate spune multe despre noi ca și programatori.
    *
    * problema constă în jocul cu același nume. vom avea un număr sau o listă de numere.
    * dacă numarul respectiv e divizibil cu 3, returnăm fizz. dacă e cu 5, returnăm buzz. dacă e cu ambele, returnăm fizzbuzz. 
    * dacă nu este nici cu 3, nici cu 5 div, returnăm numărul primit.
    *
    * am sa folosc o listă, de la 100, pentru input-ul programului. */

    cout << "voi face fizzbuzz de la numerele 1 pana la 100:\n";
    for (int i = 1; i <= 100; i++) {
        if (i%3 == 0 && i%5 == 0)
            cout << "fizzbuzz\n";
        else if (i%3 == 0)
            cout << "fizz\n";
        else if (i%5 == 0)
            cout << "buzz\n";
        else
            cout << i << endl;
    }
    return 0;
}
