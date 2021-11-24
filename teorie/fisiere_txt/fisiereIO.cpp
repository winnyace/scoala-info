#include <iostream>
#include <fstream> // necesar pt I/O cu .txt
#include <string> // necesar pt afiserea fisierului.txt
using namespace std;

int main()
{
	fstream wTxt("test.txt", ios::out); // pt a scrie intr-un fisier txt. daca nu exista, programul il va crea.
	//scrierea. ios::out sau ofstream.
	wTxt << "the quick brown fox jumps over the lazy dog\n"; // formatarea nu este automata.
	wTxt << "she's fast, but the dog can probably catch up";
	wTxt.close(); //tinem minte sa inchidem fisierului cand am terminat cu el.

	//citirea. ios::in sau ifstream.
	string text;
	fstream rTxt("test.txt", ios::in); // pt a citi
	while(getline (rTxt, text)) //getline() face ce spune, ia linia din paranteza.
		cout << text << endl;
	rTxt.close();
}
