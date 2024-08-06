
/*Q - 1  WAP to accept the value from the user and store a value in array*/


#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"enter 5 value:";

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"store a data in array\n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }
}