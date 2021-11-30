#include <iostream>
#include <vector>
using namespace std;

/* se citește de la tastatură k != 0 și un șir de numere n până la citerea lui 0.
 * să se afișeze câte numere din șir au suma cifrelor = k. */

int sumaCifre(int num)
{
    int sum = 0;
    while (num != 0) {
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int sumaTinta, num;
    vector<int> sume; // pentru un output mai curat.
    cout << "vreau o suma tinta si numere, diferite de 0. o sa spun care dintre ele au suma cifrelor egala cu suma tinta.\n";
    cout << "suma tinta = "; cin >> sumaTinta;
    do {
        cout << "num = "; cin >> num;
    } while (!(num != 0)); // do while, din motive pe care sincer nu le știu, vrea expresia din while să fie inversă a ce dorim. !(expresia) => inversa expresiei din paranteză.
    while (num != 0) {
        int suma = sumaCifre(num);
        if (suma == sumaTinta)
            sume.push_back(num); // vector cu alocare dinamică, adică nu are o limită predefinită. mai multe informații se găsesc în teorie/vector/modern.
        cout << "num = "; cin >> num;
    }
    for (auto& i : sume)
        cout << i << " ";
    return 0;
}