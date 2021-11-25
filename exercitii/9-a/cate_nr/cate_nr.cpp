#include <iostream>
using namespace std;

int main()
{
	/* se citesc nr intregi de la tastatura pana la citirea lui 13.
	 * afisati cate nr positive, negative si nule s-au citit. */
	int n, nplus = 0, nminus = 0, nnul = 0, sw = 0; 
	/* nplus pt nr positive
	 * nminus pt nr negative
	 * nnul pt 0 */
	cout << "dati val lui n(13 pt stop): "; cin >> n;
	while (n != 13) {
		sw = 1; // folosim acest sw pt a nu oferi la final 0 in caz ca nu s-au citit nr. il putem aici deoarece putem si ajuta utilizatorul
		if (n > 0)
			nplus++;
		else if (n < 0)
			nminus++;
		else
			nnul++;
		cout << "dati val lui n(13 pt stop): "; cin >> n;
	}
	if (sw == 1) { // iar aici este exact ce vorbeam mai sus.
		cout << "nr positive citite " << nplus;
		cout << endl << "nr negative citite " << nminus;
		cout << endl << "nr nule citite " << nnul;
	}
	else
		cout << "nu s-au citit numere";
	return 0;
}
