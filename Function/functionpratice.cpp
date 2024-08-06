// Q-3   
// #include<iostream>
// using namespace std;
// int product (int qty)
// {
//     return qty*500;
// }
// int main()
// {
// int qty ;
// cout<<"enter quantity\n";
// cin>>qty;
// cout<<product(qty)+product(qty)/10;
// //ydi hme discount chahiye to 10% - kr dege 
// }


//  29/07/24
//Q --   WAp to swp two numer using function with call by refrance variable. 
// call by value me memory wast hoti hai   but
// call by refrance me memory wast nhi hoti hai  
// #include<iostream>
// using namespace std;
// void swp(int &a,int &b) // call by refrance
// {
//     int tem;
//     tem = a;
//     a = b;
//     b = tem;
//     cout<<"after swapping a="<<a<<"\t";
//     cout<<"after swapping a="<<b<<"\t";
// }
// int main()
// {
//     int a,b;
//     cout<<"enter 2 value\n";
//     cin>>a>>b;
//     swp(a,b);
//     cout<<a<<"\t"<<b;
// }

// array ko as a parameter pass krna

// #include<iostream>
// using namespace std;
// void funarr (int a[],int s)
// {
//     for(int i =0 ; i<s;i++)
//     {
//         if(a[i]%2==0){
//         cout<<a[i]<<"\t";
//         }
//     }
// }
// int main()
// {
//   int a[]= {56,4,6,65,68,56 };
//   int s =sizeof(a)/sizeof(a[0]);
//   funarr(a,s);
// }


// sabhi array ki value me 10 ka encryment ho jaye
// WAP to get increment the value by 10
#include<iostream>
using namespace std;
void funarr (int a[],int s)
{
    for(int i =0 ; i<s;i++)
    {
        a[i]=a[i]+10;
    }
}
int main()
{
  int a[]= {56,4,6,65,68,56 };
  int s =sizeof(a)/sizeof(a[0]);
  funarr(a,s);
   for(int i =0 ; i<s;i++){
    cout<<a[i]<<"\t";
   }
}