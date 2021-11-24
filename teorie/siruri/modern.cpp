#include <iostream>
#include <string>
using namespace std;

int main()
{
	// folosit varianta moderna de definire, creare si modificare a sirurilor de caractere de neofera o interfata similara cu un container. multe functii sunt portate din <cstring>.
	cout << "o sa fac mai multe operatii pe siruri.\n" << "vreau un sir.\n";
	string str1;
	getline(cin, str1); // getline este modaliatea de a citi un sir cu spatii.
	cout << "sirul introdus este " << str1 << endl;
	
	// o sa presentam	
	return 0;
}
