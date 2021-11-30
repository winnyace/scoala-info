#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // se citește un nr de maxim 9 cifre. să se afișeze cifrele diferite ale lui n.
    int n;
    vector<int> apariti;
    cout << "o sa spune ce cifre apare in numarul pe care mi-l dai.\n"; cin >> n;

    for(int i = 0; i <= 9; i++) {
        int nc = n;
        while (nc != 0) {
            if (i == nc%10 && find(apariti.begin(), apariti.end(), i) == apariti.end())
                apariti.push_back(i);
            nc /= 10;
        }
    }

    for (auto& i : apariti)
        cout << i << " ";
}