#include<iostream>
using namespace std;

//const value ko reintilize krne ke liye intilizer list ka use kiya jata hai 
//initilizer list

class RBI 
{
const int rate,amount;
public:RBI(int rate,int amount):rate(rate),amount(amount)//ye initilizer list hai `````
{
    cout<<rate<<"\n";
    cout<<amount<<"\n";
}
};
int main()
{
    RBI sbi(8,100000);
    RBI axis(14,100000);
}