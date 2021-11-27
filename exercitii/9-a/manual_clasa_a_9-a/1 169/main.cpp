#include <iostream>
using namespace std;

int main()
{
    // 1/167 să se afiseze MA dintre numerele positive dintr-un vector.
    int numel, i, ma = 0;
    cout << "voi face MA a numerelor positive dintr-un vector.\n";
    cout << "câte elemente vrei să aibe vectorul:"; cin >> numel;
    int arr[numel]; // poti defeni un array/vector si asa decat sa-l definesti arr[val]. tine minte ca iti trebuie prima data n.
    for(i = 0; i < numel; i++)
    {
		cout << "v[" << i << "] = "; cin >> arr[i];
		if(arr[i] > 0)
			ma += arr[i];
    }
    if(ma > 0)
        cout << float(ma / numel); // este foarte probabil ca numerele să dea cu virgulă, așa că vom avem resultul de element float. facem un cast pentru acestă operație.
	else
		cout << "nu am gasit numere positive in vector.";
    return 0;
}
