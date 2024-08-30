// copy constructor 


#include<iostream>
using namespace std;
class atm
{
    int amount;
    public:atm(int r)
    {
        amount = r;
    }
    void show()
    {
        cout<<"balance="<<amount<<"\n";
    }
};
int main(){
atm k(10000);
k.show();
atm p=k; // implicit assiment copy constructor
p.show();
atm t(k); // shallow copy construstor
t.show();
}