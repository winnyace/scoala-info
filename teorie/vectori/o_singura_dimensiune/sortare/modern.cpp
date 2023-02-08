#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    /* cu ajutorul librariei algorithm avem la dispozitie functia sort, ce sorteaza un vector cu O = N*log2(N).
     * este suficient de rapid pentru ce STL sau Standard Template Library vrea sa faca. */

    array<int, 5> v;
    cout << "am un vector de 5 elemente. doar spune numere.\n";
    for (auto& i : v) {
        int num;
        cin >> num;
        i = num;
    }

    cout << "vectorului nesortat:\n";
    for(auto& i : v)
        cout << i << " ";

    sort(v.begin(), v.end());
    cout << "\nvectorul sorta:\n";
    for (auto& i : v)
        cout << i << " ";
    return 0;
}
