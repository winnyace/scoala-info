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
        // !!!debug: cout << i << endl;
		cout << "ma gandesc la un nr de la 1 la 20. incerca sa il ghicesti "; cin >> user;
		if(i == 5 && user != num)
			cout << "scuze nu ai ghicit nr meu. el era " << num;
		else if(user == num)
			cout << "da! ai ghicit in " << i << " incercari";
		else if(user < num)
			cout << "mai mare e nr meu \n";
		else if(user > num)
			cout << "mai mic e nr meu \n";
	}
	return 0;
}
