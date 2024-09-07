#include<iostream>
using namespace std;
class SBI {
    public:void msg()
    {
        cout<<"SBI\n";
    }
};
class AXIS {
    public:void msg()
    {
        cout<<"AXIS\n";
    }
};
class CUSTOMER:public SBI,public AXIS{
    public:void customer()
    {
        cout<<"CUSTOMER\n";
    }
};
int main(){
    CUSTOMER obj;
    // dimond problem ko solve karna
    // 1st method
    // //obj.msg(); Dimond problem
    // obj.SBI::msg();
    // obj.AXIS::msg(); // slicing
    

    // 2nd method
    SBI s=obj; //type casting
    s.msg();// ese implice sit bolte hai implicit yani jo apne app call ho jata hai
    //(par esme 2 obj banana pdta hai esiliye hm pahle bale method ko hi use krte hai )
    AXIS g=obj;
    g.msg();// ye extra memory le rha hai 

    //3rd method
     // smart pointer ke thrue bhi hm dimond problem ko solve kr sakte hai 
    static_cast<AXIS>(obj).msg();


}