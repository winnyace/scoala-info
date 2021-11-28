#include <iostream>
using namespace std;

int main()
{
    // 1/167 să se afiseze MA dintre numerele positive dintr-un vector.
    int numel, i, ma = 0;
    cout << "voi face MA a numerelor positive dintr-un vector.\n";
    cout << "câte elemente vrei in vector?\n"; cin >> numel;
    int arr[numel]; // poți defeni un array/vector și asa decât să-l definesti arr[val]. ține minte că îți trebuie prima data n citit.
    for (i = 0; i < numel; i++) {
		cout << "elementul " << i << " = "; cin >> arr[i];
		if(arr[i] > 0)
			ma += arr[i];
    }
    if (ma > 0)
        cout << float(ma / numel); // este foarte probabil ca numerele să dea cu virgulă, așa că vom avem resultul de element float. facem un cast pentru acestă operație.
	else
		cout << "nu am gasit numere positive in vector.";
    return 0;
}
