#include <iostream>
#include <string>

// https://en.wikipedia.org/wiki/Caesar_cipher

int main()
{
    std::string input;
    int n;
    char aux;
    std::getline(std::cin, input);
    std::cin >> n;

    std::string res;
    for (int i = 0; i < input.size(); i++)
    {
        if (input.at(i) >= 'a' && input.at(i) <= 'z')
            res += input.at(i)+n;
        if (input.at(i) == ' ') 
            res += ' ';
        
        if (res.at(i) > 'z')
        {
            aux = res.at(i);
            res.pop_back();
            res += aux-26; 
        }
    }

    std::cout << res;
}
