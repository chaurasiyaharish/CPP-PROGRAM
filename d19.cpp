// WAP to find out the week days name by entring any number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter day number";
    cin>>n;
    if(n==1)
    {
    	cout<<"monday";
	}
    else if(n==2)
    {
    	cout<<"tuesday";
	}
	else if(n==3)
    {
    	cout<<"wed";
	}
	else if(n==4)
    {
    	cout<<"thur";
	}
	else if(n==5)
    {
    	cout<<"friday";
	}
	else if(n==6)
    {
    	cout<<"sat";
	}
	else if(n==7)
	{
		cout<<"sunday";
	}
	else
	{
		cout<<"invalid day number";
	}
}