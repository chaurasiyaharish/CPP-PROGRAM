// WAP to print following paitern
//  1
//  1 2
//  1 2 3 
#include<iostream>
using namespace std;
int main(){
    for(int r=1; r<=3;r++)
    {
        for(int c=1; c<=r;c++)
        {
            cout<<c<<"\t";
        }
        cout<<"\n";
    }
}