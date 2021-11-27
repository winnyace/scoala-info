#include <iostream>
using namespace std;

int main()
{
	float a, b; // am ales float aici pentru a oferi resultate cu acuratețe mare.
	char oper;
	cout << "dati o cifra: "; cin >> a;
	cout << "dati o alta cifra: "; cin >> b;
	cout << "dati un operator (+, -, /, *): "; cin >> oper;
	switch (oper) {
	case '+':
		cout << a + b;
		break;
    case '-':
		cout << a - b;
		break;
	case '*':
		cout << a * b;
		break;
	case '/':
		cout << a / b;
		break;
	default:
		cout << "nici un operator nu a fost introdus sau nu a fost inteles.";
		break;
	}
	return 0;
}
