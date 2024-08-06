// //  Q-1 WAP to find the power using function
// // Q-2 WAP to find the given number is prime or not using function

// #include<iostream>
// using namespace std;
// void power(int bs,int pw){
//     int p=1;
//     // cout<<"Enter base\n";
//     // cin>>bs;
//     // cout<<"Enter power\n";
//     // cin>>pw;
//     for(int i=1; i<=pw;i++)
//     {
//       p= p*bs;
//     }
//     cout<<"Result is: "<<p<<"\n";
// }
// int main()
// {
// power(4,5);
// }

// // Q-2 WAP to find the given number is prime or not using function


#include<iostream>
using namespace std;
void prime(int n)
{
int y,count =0;
for(y=n-1;y>1;y--)
{
  if(n%y==0)
  {
    count++;
  }
}
  if(count==0)
  {
    cout<<"\n THis is prime number";
  }
  else
  {
    cout<<"\n This number is not prime";
  }
  
}

int main()
{ int n;
cout<<"Enter any number\n";
cin>>n;
prime(n);

}