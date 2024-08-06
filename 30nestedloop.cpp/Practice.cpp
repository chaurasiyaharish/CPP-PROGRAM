#include<iostream>
using namespace std;
int main() {
    int r,c,b,no;
    cout<<"enter on of row\n";
    cin>>no;
    for(r=1;r<=no;r++)
    {
        for(b=1;b<=no-r;b++)
        {
            cout<<" ";
        }
        for(c=1;c<=r;c++)
        {
            cout<<c<<"\t";
        }
        cout<<"\n";
    }
}
