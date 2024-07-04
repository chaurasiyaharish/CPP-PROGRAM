//switch case program
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"enter 2 no\n";
    cin>>a>>b;
    cout<<"select a for add and m for multiply d for division s for subtraction \n";
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
        case 'd':
        {
            cout<<a/b<<"\n";
            break;
        }
        case 's':
        {
            cout<<a-b<<"\n";
        }
        default:
        {
            cout<<"invalid choice";
            break;
        }
    }

}
