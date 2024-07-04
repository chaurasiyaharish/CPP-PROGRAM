// prime number program 
#include<iostream>
using namespace std;
int main ()
{
    int n,m,c;
    c=0;
    cout<<"enter any number\n";
    cin>>n;
    m=n-1;
    while(m>1)
    {
        if(n%m==0)
        {
            c++;
            break;
        }
        m--;
    }
    if(c==0)
    {
        cout<<" prime\n";
    }
    else{
        cout<<"not prime";
    }
}