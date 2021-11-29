#include <iostream>
using namespace std;

int main()
{
    //9/153  să se afiseze cuburile perfecte mai mici decât un nr citit.
    int n, cub;
    cout << "voi spune ce cuburi perfect sunt mai mici decat un nr pe care mi-l dai tu.\n"; cin >> n;
    for(int i = 1; i <= n; i++) {
        cub = i * i * i;
        if (cub < n)
            cout << cub << endl;
    }
    return 0;
}
