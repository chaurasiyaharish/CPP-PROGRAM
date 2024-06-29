// WAP in cpp enter any number wich is 1 for square,2 for quibe and 3 for even/odd.
#include <iostream>
using namespace std;
int main()
{
  int n,c;
  cout<<"enter any number\n";
  cin>>n;
  cout<<"select 1 for square, 2 for quibe and 3 for even/odd\n";
  cin>>c;
  switch (c)
  {
    case 1:
    {
        cout<<"square is "<<n*n;
        break;
    }
    case 2:
    {
        cout<<"quibe is "<<n*n*n;
        break;
    }
    case  3:
    {
        if(n%2==0)
        {
            cout<<" is even number";
        }
        else{
            cout<<" is odd number";
        }
        break;
    }
    default:
    {
        cout<<"invaid  number";
    }
  }
}