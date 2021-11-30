#include <iostream>
using namespace std;

int main()
{
    // 10/153 să se afiseze pătratele perfecte mai mici decât un nr citit.
    int n, prod;
    cout << "o sa afisze patratele perfect mai mici decat un nr pe care mi-l dai tu.\n"; cin >> n;
    for(int i = 1; i <= n; i++) {
        prod = i * i;
        if (prod < n)
            cout << prod << endl;
    }
    return 0;
}
