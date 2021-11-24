#include <iostream>

using namespace std;

int main()
{
    // acest program este o solutie pentru problem fizz buzz
    // daca un number este div cu 3 scrie fizz. daca e cu 5 scrie buzz. daca e cu ambele scrie fizzbuzz. altfel nu se schimba nimic.
    int n;
    cout << "n= "; cin >> n;
    if (n % 3 == 0 && n % 5 == 0)
        cout << "fizzbuzz";
	else if (n % 3 == 0)
		cout << "fizz";
	else if (n % 5 == 0)
		cout << "buzz";
	else
		cout << n;
    return 0;
}
