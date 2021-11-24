#include <iostream>
using namespace std;

int main()
{
	// acest algorithm va conversa un nr din baza 10 in baza q, cu q fiind dat de noi/utilizator.
	int num10, baza, num = 0, pos = 1;
	cout << "dati un nr in baza 10 "; cin >> num10;
	cout << "dati o baza "; cin >> baza;
	while (num10 != 0) {
		num = num + pos * (num10 % baza); // num este noul nostru numar in noua baza iar acesta este formula.
		num10 /= baza;
		pos *= 10; // pos = pozitia iar ea se schimba cu fiecare noua cifra.
	}
	cout << "noul numar:" << num;
	return 0;
}
