#include <iostream>
using namespace std;

int main()
{
	// pentru algoritmul de cmmmc a doua numere, vom folosi algoritmul de cmmdc cu formula (a*b) / cmmdc.
	int a, b, copieA, copieB;

	cout << "pot face cmmmc dintre doua numere. doar spune numerele.\n";
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	copieA = a;
	copieB = b;
	while (copieA != copieB) {
		if (copieA > copieB)
			copieA -= copieB;
		else
			copieB -= copieA;
	}

	cout << "cmmmc de " << a << " si "  << b << " este " << (a*b)/copieA;
	return 0;
}
