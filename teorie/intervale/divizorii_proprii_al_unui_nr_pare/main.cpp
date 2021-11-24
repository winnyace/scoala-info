#include <iostream>
using namespace std;

int main()
{
	/* Se citeste un nr nat (n e N*).
	 * Se cere pentru nr pare din intervalul 1,n sa se afiseze nr div. proprii. pe cate un rand al ecranului. */
	int limita, div;
	cout << "dati un nr intreg nat <> 0:"; cin >> limita;
	for (int i = 1; i <= limita; i++) {
		for (div = 2; div <= i/2; div = div + 2) 
			// incepem de la 2 pentru ca cautam printre nr pare. mergem din 2 in 2 pentru economisere de resurse.
			if(i % div == 0) {
				cout << div << " " << i; // am pus i aici deoarece ar putea parea ciudat sa vedem mai multi divizori comuni pentru diferente valori.
				cout << endl;
			}
	}
	return 0;
}
