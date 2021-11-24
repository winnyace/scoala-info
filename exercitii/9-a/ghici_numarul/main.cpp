#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, user;
	srand(time(0)); // acesta face toata magia de generare al unui nr random
	num = rand()%21; // avem %21 dupa rand() pentru a limita nr generate la 20.

	for(int i = 0; i <= 5; i++) {
		cout << "ma gandesc la un nr de la 1 la 20. incerca sa il ghicesti "; cin >> user;
		if(i == 5 && user != num) {
			cout << "scuze nu ai ghicit nr meu. el era " << num;
			break;
		}
		else if(user == num) {
			cout << "da! ai ghicit in " << i << " incercari";
			break;
		}
		else if(user < num) {
			cout << "mai mare e nr meu \n";
			 // debug cout << i << endl;
		}
		else if(user > num) {
			cout << "mai mic e nr meu \n";
			// debug cout << i << endl;
		}
	}
	return 0;
}
