#include<iostream>
using namespace std;
int main()
{
    for(int r=5;r>0;r--)
    {
        for(int s=5-r;s>0;s--)
        {
            cout<<" ";
        }
        for(int c=r;c>0;c--)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}