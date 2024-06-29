//WAP to print the sum of three digit number
#include<iostream>
using namespace std;
int mmain()
{
    int a,b,c,d,e;
    cout<<"enter three dihgitr number\n";
    cin>>b;
    b=a/100;
    c=a%100;
    d=c/10;
    cin>>d;
    e=c%10;
    cin>>e;
    cout<<b+d+e;
    return 0;
}