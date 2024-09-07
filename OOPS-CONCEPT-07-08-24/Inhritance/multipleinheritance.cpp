// more then two class 
#include<iostream>
using namespace std ;
class AXIS{

    public:AXIS(){

cout<<"\n AXIS \n";
    }
    ~AXIS(){
        cout<<"AXIS DEL\n";
    }
};
class SBI{

    public:SBI(){

cout<<"\n SBI \n";
    }
    ~SBI(){
        cout<<"SBI DEL\n";
    }
};
class CUST:public SBI,public AXIS{
    // pahle SBI ki memory locat hogi fir AXIS ki memory locate hogi fir CUST ki memory locate hogi 
    // ydi SBI ki jagah pr AXIS likha hota to pahle AXIs ki memory locate hoti fir SBI ki 

    public:CUST(){

cout<<"\n CUST \n";
    }
    ~CUST(){
        cout<<"CUST DEL\n";
    }
};
int main(){
    CUST c;
}
