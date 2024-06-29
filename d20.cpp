//WAP to find out the month name 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any month\n";
    cin>>n;
    if(n==31)
    {
        cout<<"january\n";
        cout<<"March\n";
        cout<<"May\n";
        cout<<"july\n";
        cout<<"August\n";
        cout<<"Actober\n";
        cout<<"december\n";
    }
    else if(n==29)
    {
        cout<<"Febaury\n";
     }
     else if(n==28)
     {
        cout<<"Febaury\n";
     }
     else if(n==30)
     {
        cout<<"\nApril";
        cout<<"\nJun";
        cout<<"\nSeptember";
        cout<<"\nNobember";
     }
     else{
        cout<<"invalid month";
     }
}