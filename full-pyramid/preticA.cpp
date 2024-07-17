// q-1

// #include<iostream>
// using namespace std ;
// int main ()
// {
//     for(int r=1; r<=3;r++)
//     {
//         for(int sp=3;sp>r;sp--)
//         {
//             cout<<" ";
//         }
//         for(int c=1; c<=r;c++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }
//     *
//   * *
// * * *

// q-2.................

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int r = 1; r <= 3; r++)
//     {
//         for (int sp = 3; sp > r; sp--)
//         {
//             cout << " ";
//         }
//         for (int c = 1; c <= r; c++)
//         {
//             cout << char(c + 64);
//         }
//         cout << "\n";
//     }
// }

//q-3

// #include <iostream>
// using namespace std;
// int main()
// {   
// int k=0;
//     for (int r = 1; r <= 3; r++)
//     {
//         for (int sp = 3; sp > r; sp--)
//         {
//             cout << " ";
//         }
//         for (int c = 1; c <= r; c++)
//         {
//             cout << k++;
//         }
//         cout << "\n";
//     }
// }
//q-4
// #include<iostream>
// using namespace std ;
// int main ()
// {
//     for(int r=1; r<=3;r++)
//     {
//         for(int sp=3;sp>r;sp--)
//         {
//             cout<<" ";
//         }
//         for(int c=1; c<=r;c++)
//         {
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
// }


//q=5  WAP to print invated pyramid

 #include <iostream>
using namespace std;
int main()
{
    for (int r = 5; r <= 1; r--)
    {
        for (int sp = 5; sp > r; sp--)
        {
            cout << " ";
        }
        for (int c = 1; c <= r; c++)
        {
            cout <<"* ";
        }
        cout << "\n";
    }
}