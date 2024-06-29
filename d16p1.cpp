#include <iostream>
using namespace std;
int main()
{
    int pwd, otp;
    cout << "enter ur pwd";
    cin >> pwd;
    if (pwd == 2024)
    {
        cout << "enter ur otp\n";
        cin >> otp;
        if (otp == 1007)
        {
            cout << "owner";
        }
        else
        {
            cout << "froud";
        }
    }
    else
    {
        cout << "not matched";
    }
}