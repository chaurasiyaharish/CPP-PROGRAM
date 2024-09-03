//jab bhi non primitive datatype me operation perform krna ho to
// operatoroverloding ka use kiya jata hai 
#include<iostream>
using namespace std;
class cybrom
{
    int a;
    public : cybrom(int b)
    {
        a=b;
    }
    void operator++(){
        a++;
        cout<<a;
    }
};
int main(){
 cybrom obj (20);
 ++obj;
}