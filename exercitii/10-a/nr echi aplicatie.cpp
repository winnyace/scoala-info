#include <iostream>
using namespace std;

bool nr_echi(int n)
{
	int spar = 0, simpar = 0, pos = 0;
	while(n != 0) {
		if(pos % 2 == 0)
			spar += n%10;
		else
			simpar += n%10;
		n /= 10;
		pos++;
	}
	if(spar == simpar)
		return true;
	else
		return false;
}

int main()
{
	int a, b, ok = 0;
	cin >> a >> b;
	for(int i = b; i >= a; i--)
		if(nr_echi(i) == true) {
			cout << i << " ";
			ok = 1;
		}
	if(ok == 0)
		cout << "nu sunt nr.echi in interval.";
}
