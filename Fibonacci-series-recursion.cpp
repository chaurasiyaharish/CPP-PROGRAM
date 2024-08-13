// WAP to genrate the n^th terms FIBONACCI series using recursing
//06-8-24
// fibonacci series just like a sum of two number
//ex => 0 1 1 2 3 5 8 13 21 34......n 
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
 int k;
 cout<<"enter any terms\n";
cin>>k;
cout<<"Fibonacci series of "<<k<<""<<fib(k);
}