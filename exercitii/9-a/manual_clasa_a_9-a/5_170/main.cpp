#include <iostream>
using namespace std;

int main()
{
	// 5/170 să se copiez elementele din vec a în b.
    int numel;
    cout << "o să copiez un vector ce mi-l dai în alt vector.\n";
    cout << "cate elemente vrei in vector?\n"; cin >> numel;
    int vec1[numel], vec2[numel];
    for (int i = 0; i < numel; i++) {
        cout << "elementul " << i << " = "; cin >> vec1[i];
        vec2[i] = vec1[i];
    }
    for (int i = 0; i < numel; i++)
        cout << "elementul " << i << " din primul vec: " << vec1[i] << "\n și din al doilea vec: " << vec2[i] << endl;
	return 0;
}
