#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	// 14/153 Se citeste un numar natural nenul care poate avea maxim 9 cifre. Afisati cifrele distincte ale numarului
	int n, uc;
    vector<int> apariti;
	cout << "o sa spune ce cifre apar in numarul pe care mi-l dai.\n"; cin >> n;
	while (n != 0) {
        uc = n%10;
        apariti.push_back(uc);
        n /= 10;

        uc = n%10;
        if (find(apariti.begin(), apariti.end(), uc) == apariti.end())
            apariti.push_back(uc);
        n /= 10; 
    }

    reverse(apariti.begin(), apariti.end());
    for (auto& i : apariti)
        cout << i << " ";
	return 0;
}
