// Q-1
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      int arr[2][3];
//      for(int r=0;r<=1;r++)
//      {
//          for(int c=0;c<=2;c++)
//          {
//              cin>>arr[r][c];
//          }
//      }
//       cout<<"output is\n ";
//       for(int r=0;r<2;r++)
//       {
//          for(int c=0;c<3;c++){
//              cout<<arr[r][c]<<"\t";
//          }cout<<"\n";
//       }

//     }

// Q-2  WAp to display the

//     #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[2][3];
//     for(int r=0;r<=1;r++)
//     {
//         for(int c=0;c<=2;c++)
//         {
//             cin>>arr[r][c];
//         }
//     }
//      cout<<"output is\n ";
//      for(int r=0;r<2;r++)
//      {
//         for(int c=0;c<3;c++){
//             if(arr[r][c]==0){
//                 arr[r][c]=-1;
//             }
//             cout<<arr[r][c]<<"\t";
//         }cout<<"\n";
//      }

//     }

// Q-3   WAp to find the even number given in 2d array

//     #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[2][3];
//     for(int r=0;r<=1;r++)
//     {
//         for(int c=0;c<=2;c++)
//         {
//             cin>>arr[r][c];
//         }
//     }
//      cout<<"output is\n ";
//      for(int r=0;r<2;r++)
//      {
//         for(int c=0;c<3;c++){
//             if(arr[r][c]%2==0){
//                cout<<arr[r][c]<<"\t";
//             }
//         }cout<<"\n";
//      }

//     }

// Q-4WAp to display the sum of the value of two dimension array.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[2][3];
//     int sum = 0;
//     cout<<"enter 2*3 array value\n";
//     for(int r=0;r<=1;r++)
//     {
//         for(int c=0;c<=2;c++)
//         {
//             cin>>arr[r][c];
//         }
//     }
//      cout<<"output is\n ";
//      for(int r=0;r<2;r++)
//      {
//         for(int c=0;c<3;c++){
//             cout<< arr[r][c]<<"\t";
//             sum = sum + arr[r][c];
//         }
//         cout<<"\n";
//      }
//      cout<<"Total sum of value: "<<sum<<"\t";

//     }

// Q-5  WAP to find the transport matrix in array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3];
//     cout<<"enter 2*3 array value\n";
//     for(int r=0;r<=1;r++)
//     {
//         for(int c=0;c<=3;c++)
//         {
//             cin>>arr[r][c];
//         }
//     }
//      cout<<"output is\n ";
//      for(int r=0;r<3;r++)
//      {
//         for(int c=0;c<3;c++){
//             cout<< arr[r][c]<<"\t";
//         }
//         cout<<"\n";
//      }

//     }

// Q-6 WAp to add the calue of two array according to respetive colomn.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[2][2] = {2, 3, 4, 5};
//     int b[2][2] = {6, 1, 2, 9};
//     for (int r = 0; r < 2; r++)
//     {
//         for (int c = 0; c < 2; c++)
//         {
//             cout << a[r][c] + b[r][c] << "\t";
//         }
//         cout << "\n";
//     }
// }

//Q-7 WAp to 

#include <iostream>
using namespace std;
int main()
{
    int a[2][2] = {2, 3, 4, 5};
    int b[2][2] = {6, 1, 2, 9};
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 2; c++)
        {   
            if(a[r][c]%2==0){
            cout << a[r][c] + b[r][c] << "\t";
            }
            else
            {
           cout << a[r][c] - b[r][c] << "\t";     
            }
        }
        cout << "\n";
    }
}
