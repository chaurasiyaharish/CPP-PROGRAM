//WAP to display the sum of of value between 1 to 10
#include<iostream>
using namespace std;
int main()
{
    int a=1,s=0;
    do{
        s=s+a;
        // cout<<s<<"\n";
        a++;
         cout<<s<<"\n";
    }
    while(a<=10);
}