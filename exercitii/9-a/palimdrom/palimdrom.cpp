#include <iostream>

using namespace std;

int main()
{
    int no, nnou, nv; // no = Numarul Original, nou = Nr NOU creat din cel original, nv = copie a Nr Vechi.
    nnou = 0;
    cout << "nr = "; cin >> no;
    nv = no;
    while(no != 0)
        {
            nnou = nnou * 10 + no % 10;
            no = no / 10;
        }
    if (nv == nnou)
        cout << "nr este palimdrom";
    else
        cout << "nr nu este palimdrom";
    return 0;
}
