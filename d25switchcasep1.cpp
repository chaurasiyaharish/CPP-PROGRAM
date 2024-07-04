// WAP in cpp enter any chercater wich is 1 for vowel/consonent and 2 for gender.
#include <iostream>
using namespace std;
int main()
{
    char n, c;
    cout << "enter any charcter \n";
    cin >> n;
    cout << "select v for vowel/consonent nad g for gender\n";
    cin >> c;
    switch (c)
    {
    case 'v':
    case 'V':
    {
        if (n == 'a' || n == 'i' || n == 'e' || n == 'o' || n == 'u' || n == 'A' || n == 'I' || n == 'E' || n == 'O' || n == 'U')
        {
            cout << "Vowel";
        }
        else
        {
            cout << "consonent";
        }
        break;
    }
    case 'g':
    case 'G':
    {
        if (n == 'm' || n == 'M')
        {
            cout << "Male";
        }
        else if (n == 'f' || n == 'F')
        {
            cout << "Female";
        }
        else
        {
            cout << "other";
        }
        break;
    }
    default:
    {
        cout << "invalid choice";
    }
    }
}