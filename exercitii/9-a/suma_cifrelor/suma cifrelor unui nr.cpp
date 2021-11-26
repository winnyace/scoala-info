#include <iostream>
using namespace std;

int main()
{
    // acest program va folosi ce am învățat despre mod și div și vom calcula suma cifrelor unui numar.
    int num, suma = 0;
    cout << "o sa calculez suma cifrelor unui numar. spune-mi numarul:"; cin >> num;
    while (num != 0) {
        // am învățat că div/10 scapă de cifrele unui număr. când scăpam de ultima cifră, numărul rămas e 0.
        suma = suma * 10 + num%10; // înmulțim cu 10 pentru posiția cifrei.
        num /= 10;
    }
    cout << "suma cifrelor este " << suma;
}
