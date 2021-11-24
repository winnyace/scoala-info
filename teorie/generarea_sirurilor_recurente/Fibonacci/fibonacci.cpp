#include <iostream>
using namespace std;

int main()
{
	/* Sirul Fibonacci este un sir mai special.
	 * primii doi termeni sunt egal cu 1 iar restul sunt egali cu ultimii doi.
	 * ex 1,1,2,3,5,8,13,... */
	int limita, num1, num2, numfinal;

	cout << "pot face un sir Fibonacci pana la ce numar vrei. am nevoie de o limita.\n";
	cout << "limita = "; cin >> limita;

	num1 = num2 = 1;
	cout << num1 << " " << num2 << " ";
	numfinal = num1 + num2;
	while (numfinal <= limita) {
		cout << numfinal << " ";
		num1 = num2;
		num2 = numfinal;
		numfinal = num1 + num2;
	}
	return 0;
}
