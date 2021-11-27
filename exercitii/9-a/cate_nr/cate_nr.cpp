#include <iostream>
using namespace std;

int main()
{
	/* se citesc nr întregi de la tastatură până la citirea lui 13.
	 * afisați câte nr positive, negative și nule s-au citit. */
	int num, numPlus = 0, numMinus = 0, numNul = 0, sw = 0;
	/* numPlus pt nr positive
	 * numMinus pt nr negative
	 * numNul pt 0 */
	cout << "dati val lui num(13 pt stop): "; cin >> num;
	while (num != 13) {
		sw = 1; // folosim acestă variabilă pentru output-ul programului.
        if (num > 0)
			numPlus++;
		else if (num < 0)
			numMinus++;
		else
			numNul++;
		cout << "dati val lui num(13 pt stop): "; cin >> num;
	}
	if (sw == 1) { // iar aici este exact ce vorbeam mai sus.
		cout << "nr positive citite " << numPlus;
		cout << endl << "nr negative citite " << numMinus;
		cout << endl << "nr nule citite " << numNul;
	}
	else
		cout << "nu s-au citit numere";
	return 0;
}
