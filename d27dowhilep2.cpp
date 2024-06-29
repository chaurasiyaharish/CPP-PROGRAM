//WAP  to disple genarate table any number
#include<iostream>
using namespace std;
int main()
{
    int a=1,n;
    cout<<"enter any number\n";
    cin>>n;
    do{
        cout<<n*a<<"\n";
        a++;
    }
    while(a<=10);
}