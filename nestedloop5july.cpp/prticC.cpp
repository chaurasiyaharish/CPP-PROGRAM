// WAP to print following paitern
//  
//  * *
//  * * *
#include<iostream>
using namespace std;
int main()
{
    int p=1;
    for(int r=1; r<=3; r++)
    {
        for(int c=1;c<=r;c++)
        p++;
        cout<<p<<"\t";

    }
    cout<<"\n";
}