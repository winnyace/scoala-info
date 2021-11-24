#include <iostream>
using namespace std;

/* Un subprogram sau functie este o portiune de cod care este executata cand este apelata.
 * Ea se pozitioneaza inaintea functiei main si este foarte folositoare cand dorim sa lucram mai eficient, mai curat.
 * Aceste functie ocupa zona stivei pe memorie. Stiva este, de fapt, un stack de memorie. Ea are decat un capat, cel de
 * sus, similar cu un stac de hartii sau farfurii, spre exemplu.
 * Cand functie este apelata, executia din main se opreste si se retine urmatoarea linie de cod din main, executam codul din
 * functie si revenim in main, de unde se continua executia ei, pana cand intalnim alta functie sau se ne oprim din executie. */

int test(int n) //in paranteza se afla un argument. acesta trebuie sa fie precizat cand apelam functia, si trebuie sa corespunda cu tipul de data pe care argumentul il are.
{
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum; //este tip de functie se numeste operand. ea are un tip si returneaza la sfarsirea executiei o valoare dictata de tipul de data al functiei. aici este de tip int sau nr intreg.
}

// Mai exista si functii procedurale. ele nu au tip, precizat prin cuvantul cheie 'void'. functiile de aceste tip nu returneaza nimic.

int main()
{
	int num;
	cin >> num;
	cout << test (num); //functiile operand pot fi apelate doar intr-o expresie, precum intr-un cout sau fiind valoriile unei variabile de tip corespunsator.
	//functiile procedurale pot fi doar apelate cu numele lor si argumentele necesare.
}
