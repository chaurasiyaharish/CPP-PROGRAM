// WAP to print following paitern
//  1
//  1 2
//  1 2 3

// #include<iostream>
// using namespace std;
// int main(){
//     for(int r=1; r<=3;r++)
//     {
//         for(int c=1; c<=r;c++)
//         {
//             cout<<c<<"\t";
//         }
//         cout<<"\n";
//     }
// }

//    *
//   * *
//  * * *

#include <iostream>
using namespace std;
int main()
{
    for (int r = 5; r>=1; r--)
    {
        for (int s = 5-r; s > 0; s--)
        {
            cout <<" ";
        }
        for (int c = r; c >= 1; c--)
        {
            cout <<"* ";
        }
        cout << "\n";
    }
}