//WAP to display the sum of digit of any number
#include<iostream>
using namespace std;
int main ()
{
   int a,s=0;
   cout<<"enter any number\n"; 
   cin>>a;
   while(a>0)
   {
    s=s+(a%10);
    a=a/10;
   }
   cout<<"sum of digit="<<s;
}
