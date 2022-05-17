#include <iostream>
#include <cstring> //pentru siruri ca in C
#include <sys/types.h>
//#include <string> pentru varianta moderna
using namespace std;

int main()
{
	//definirea unui sir de caractere:
	char sir[256]; //sirurile de caractere sunt doar vectori de caractere ordonate

	//citirea si afisearea lor:
	cout << "introduceti un sir: "; cin.get(sir, 256);
	cout << "sirul introdus: " << sir << endl;

	//functii pentru siruri: sunt functii care fac o anumita actiune pe siruri.
	// strlen(sir): returneaza numarul de caractere pe care il are sirul
	cout << "nr de caractere al sirului introdus este de: " << strlen(sir) << endl << endl;

	// strcpy(sir_destinatie, sir_sursa): copiaza ce e in sirul destinatie in sirul sursa
	char scpy1[21], scpy2[] = "Buna ziua";
	strcpy(scpy1, scpy2);
	cout << "sirul scpy1: " << scpy1;
	cout << "\nsirul scpy2: " << scpy2 << endl;
	// strncpy(sir_destinatie, sir_sursa, nr_de_caractere): copiaza doar n caractere din sirul destinatie in sirul sursa

	// strcat(sir_destinatie, sir_sursa): concateneaza/alipeste/adauga sirul destinatie in cel sursa
	char scat1[] = "Kurashina ", scat2[] = "Asuka";
	strcat(scat1, scat2);
	cout << "\nsirule 'Kurashina' si 'Asuka': " << scat1 << endl << endl;
	//strncat(sir_destinatie, sir_sursa): concateneaza sirul destinatie in cel sursa n caractere	
	
	//strcmp(s1, s2): compara doua siruri prin codurile ASCII ale literelor sirulului. este case sensitive returneaza 0 daca sunt identice, positiv daca s1>s2, si invers pentru s2>s1
	char scmp1[] = "test", scmp2[] = "test";
	cout << "s1: " << scmp1 << "\ns2: " << scmp2;
	if(strcmp(scmp1, scmp2) == 0)
		cout << "\nsirurile sunt la fel" << endl << endl;
	else
		cout << "\nsirurle nu sunt la fel" << endl << endl;
	//strncmp(s1, s2): compara doua siruri prin codurile ASCII ale literelor sirurilor. nu este case sensitive
	
	//strchr(s, char): verifica daca caracterul introdus in functie exista in sir. retuneaza prima aparitie a caracterului, NULL altfel
	char s[] = "test";
	if(strchr(s, 't') != 0)
		cout << strchr(s, 't') << " ";
	//strrchr(s, char): verifica daca caracterul introdus in functie exista in sir. returneaza ultima apartie a caracterului, NULL altfel
	if(strrchr(s, 't') != 0)
		cout << strrchr(s, 't') << endl << endl;
}
