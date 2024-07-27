// // WAP to find the duplicate value in array
// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={4,3,2,45,6,3};
//     int c=0;
//     int len =sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<len;i++)
//     {
//         for(int j=i+1;j<len;j++)
//         {
//             if(a[i] == a[j])
//             {
//                 c++;
//                 cout<<a[i]<<"\t";
//             }
//         }
//     }
//     cout<<"total duplicate value count"<<c;
// }

// wap to find the uniq value in array

#include <iostream>
using namespace std;
int main()
{
    int a[] = {4, 3, 2, 45, 6, 3};
    int i, j;
    int len = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (a[i] == a[j])  // array ki actul value ,like 4,3,2,45,6,3
            {
                break;
            }
        }
        if (i == j)  // index value  ,  like 1,2,3,4,5
        {

            cout << a[i] << "\t";
        }
    }
}
