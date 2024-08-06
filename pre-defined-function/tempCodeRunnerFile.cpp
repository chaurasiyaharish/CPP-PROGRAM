#include<iostream>
using namespace std;
int dsc (int n)
{
    if(n==0)
    {
        return 0;
    }
    dsc(n-1);
    cout<<n<<"\t"; //ye head recursion hai ye value ko store kr ke rakhta jata hai fir print krta hai 
}
int main(){
  dsc(5);
}