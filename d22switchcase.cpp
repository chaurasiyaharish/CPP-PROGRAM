//switch case program
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"enter 2 no\n";
    cin>>a>>b;
    cout<<"select a for add and m for multiply\n";
    cin>>c;
    switch(c)
    {
        case 'a':
        {
            cout<<a+b<<"\n";
            break;
        }
        case 'm':
        case 'M':
        {
            cout<<a*b<<"\n";
            break;
        }
        default:
        {
            cout<<"invalid choice";
            break;
        }
    }

}
