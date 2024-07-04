// WAP to find the count the number of digit to make a given number
#include<iostream>
using namespace std;
int main()
{
    int c=0;
    int n;
    cout<<"enter any number \n";
    cin>>n;
    for(n;n>0;n=n/10)
    {
        c++;
    }
    cout<<"total digit="<<c;
}