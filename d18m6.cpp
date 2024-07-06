#include<iostream>
using namespace std;
int main()
{
    int n,bill;
    cout<<"enter meter reading\n";
    cin>>n;
    if(n>=1 && n<=100)
    {
        bill=n*5;
    }
    else if (n>100 && n<=500)
    {
        bill=n*7;
    }
    else if(n>500)
    {
        bill=n*10;
    }
    else{
        cout<<"invalid meter reading";
    }
    cout<<"bill  :"<<bill+(bill*.20);
}