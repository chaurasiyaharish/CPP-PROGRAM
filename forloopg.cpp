//  WAP to find out perfect or not perfect no.
#include <iostream>
using namespace std;
int main()
{
    int n, s = 0;
    cout << "enter no\n";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
    }
    if (s == n)
    {
        cout << n << "is a prefect number";
    }
    else
    {
        cout << n << "is not prefect no";
    }
}


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, s = 0;
//     cout << "enter any no.";
//     cin >> n;
//     for (int i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//          s = s + i;
//         }
//     }
//     if (s==n)
//     {
//     cout<<n<<"is a perfect no";
//     }
//     else
//     {
//     cout<<n<<"is not perfect no";
//     }
// }