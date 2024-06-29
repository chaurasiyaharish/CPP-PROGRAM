// WAP program
#include <iostream>
using namespace std;
int main()
{
    int pwd c = 3;
pass:
    cout << "enter ur password\n";
    cin >> pwd;
    if (pwd == 1234)
    {
        cout << "welcome\n";
    }
    else
    {
        c--;
        if (c >= 1)
        {
            cout << "more attempt\n";
            goto pass;
        }
        else
        {
            cout << "u r block\n";
        }
    }
}