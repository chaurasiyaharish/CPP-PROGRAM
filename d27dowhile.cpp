//WAP to display even and odd number bwetween 1 to 10
#include<iostream>
using namespace std;
int main ()
{
    int a=1;
    do
    {
        if(a%2==0)
        {
            cout<<"even number is ="<<a<<"\n";
        }
        else{
            cout<<"odd number is ="<<a<<"\n";
        }
        a++;
    }while(a<=10);
}