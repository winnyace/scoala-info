#include <iostream>

using namespace std;

int main()
{
    // 1/167 sa se afiseze ma dintre numerele positive dintr-un vector.
    int n, i, k = 0;
    float ma = 0;
    cin >> n; 
    int arr[n]; // poti defeni un array/vector si asa decat sa-l definesti arr[val]. tine minte ca iti trebuie prima data n.
    for(i = 0; i < n; i++)
    {
		cin >> arr[i];
		if(arr[i] > 0)
		{
			ma = ma + arr[i];
			k++;
		}
    }
    if(k > 0) {
		ma = ma / k;
		cout << ma;
	}
	else {
		cout << "nu prea pot sa fac nr negative. asa mi-a zis exercitiu. stiu, stupid.";
	}
    return 0;
}
