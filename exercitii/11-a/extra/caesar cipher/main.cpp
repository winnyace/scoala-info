#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    string cStr;
    for (long unsigned i = 0; i < str.length(); i++) {
        if (str.at(i) >= 'a' && str.at(i) < 'z')
           cStr += str.at(i)+1;
        if (str.at(i) >= 'z')
            cStr += str.at(i)-'z'+'`'+1;
        if (str.at(i) == ' ')
            cStr += str.at(i);
    }
    cout << cStr;
    return 0;
}
