// prime number program 
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,m,c;
//     c=0;
//     cout<<"enter any number\n";
//     cin>>n;
//     m=n-1;
//     while(m>1)
//     {
//         if(n%m==0)
//         {
//             c++;
//             break;
//         }
//         m--;
//     }
//     if(c==0)
//     {
//         cout<<" prime\n";
//     }
//     else{
//         cout<<"not prime";
//     }
// }


//or

// #include<iostream>
// using namespace std;
// void prime(int n)
// {
//     int m,c=0;
//  for(m=n-1;m>1;m--)
//     {
//         if(n%m==0)
//         {
//             c++;
//         }
//     }
//     if(c==0)
//     {
//         cout<<"prime\n";
//     }
//     else{
//         cout<<"not prime";
//     }
// }
// int main ()
// {
//     int n;
//     cout<<"enter any number\n";
//     cin>>n;
   
// }

//prime number program 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter any number\n";
//     cin>>n;
//     if(n<2)
//     {
//         cout<<"this is not prime number"<<"\n";
    
//     }
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<"this is a not prime"<<"\n";
//             break;
//         }
//         else{
//             cout<<"this is prime number\n";
//             break;
//         }
//     }
    
// }

#include<iostream>
using namespace std;
int prime(int n)
// {
//     if(n<2)
//     cout<<"not prime";
//     return 0;
//     for(int i =2;i<n;i++)
//     {
//         if(n%i==0)
//         cout<<"not prime";
//         return 0;
//     }
//     cout<<"this is prime";
//     return 1;
// }
{
    if(n%2==0)
    {
        cout<<"\n"<<"even";
    }
    else{
        cout<<"not";
    }
}
int main(){
    int a;
    cout<<"enter any number\n";
    cin>>a;
    cout<<"\n"<<prime(a);
}