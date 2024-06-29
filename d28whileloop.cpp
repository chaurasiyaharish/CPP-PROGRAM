//fectorial
#include<iostream>
using namespace std;
int main()
{
    int n , m ;
    cout<<"enter any number\n";
    cin>>n;
    m=n-1;
    while(m>=1)
    {
        n=n*m;
        m--;
    }
    cout<<"fectorial = "<<n;
}