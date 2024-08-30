// copy constructor 


#include<iostream>
using namespace std;
class atm
{int amount,*loc;

    public:atm(atm &t)
    {
        amount = t.amount;
        loc=new int;
        *loc=*(t.loc);
    }
    atm(int atm,int adrs)
    {
        amount = atm;
        loc = new int;
        loc=&adrs;
    }
    void transaction (int a)
    {
        amount = amount+a;
        *loc = *loc+1;
    }
    void show()
    {
        cout<<"blance="<<amount<<"\n";
        cout<<"location"<<*loc<<"\n";
    }
};
int main(){
atm mpnagar(1000,101);
atm bhel(mpnagar);
mpnagar.show();
mpnagar.transaction(1000);
mpnagar.show();
bhel.show();
}