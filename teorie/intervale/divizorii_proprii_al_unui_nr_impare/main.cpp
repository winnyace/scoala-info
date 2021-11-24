#include <iostream>
using namespace std;

int main()
{
	/* Se citeste un nr nat (n e N*).
	 * Se cere pentru nr impare din intervalul 1,n sa se afiseze nr div. proprii. pe cate un rand al ecranului. */
	int n, i, div;
	cout << "dati un nr intreg nat <> 0:"; cin >> n;
	for (i = 1; i <= n; i++) {
		for (div = 3; div <= i/2; div = div + 2) {
			//incepem de la 3 pentru ca cautam printre nr impare. mergem din 2 in 2 pentru economisere de resurse.
			if(i % div == 0) {
				cout << div << " " << i; // am pus i aici deoarece pare ciudat sa vedem mai multi divizori comuni pentru diferente valori.
				cout << endl;
			}
		}
	}
	return 0;
}
