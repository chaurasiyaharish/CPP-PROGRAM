// enter
#include <iostream>
using namespace std;
int main()
{
    int p, r, t, c;
    cout << "enter three value\n";
    cin >> p >> r >> t;
    cout << "select for 1 simple intrest and 2 for largest number\n"; 
    cin >> c;
    switch (c)
    {
    case 1:
    {
        cout << "simple intrest= " << (p * r * t) / 100;
        break;
    }
    case 2:
    {
        if (p > r && p > t)
        {
            cout << p << "is max";
        }
        else if (r > p && r > t)
        {
            cout << r << "is max";
        }
        else
        {
            cout << t << "is maix";
        }
        break;
    }
    default:
    {
        cout << "invalid choice";
    }
    }
}