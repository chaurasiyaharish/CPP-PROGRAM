//Menu based  program
#include <iostream>
using namespace std;
int main()
{
    int a,b,t;
    cout<<"enter 2 no\n";
    cin>>a>>b;
    cout<<"select 1 for swp and 2 for max vlaue\n";
    cin>>t;
    switch(t)
    {
        case 1:
        {
            t=a;
            a=b;
            b=t;
            cout<<"a="<<a<<"\n"<<"b="<<"\n";
           
        break;
        }
        case 2:{
            if(a>b)
            {
                cout<<a<<"is max";
            }
            else{
                cout<<b<<"max";
            }
            break;
        }
        default:
        {
            cout<<"invalid choice";
            break;
        }
    }
}