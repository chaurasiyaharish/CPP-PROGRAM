// // function overloding 
// #include<iostream>
// using namespace std;
// class cybrom{
//     int a,b,c;
//    public:void sum(int x,int y)
//     {
//     a=x;
//     b=y;
//     // fun memory nhi leta hai 
//     // memory leta hai datamember
//     // function run time pe memory leta hai  
//     cout<<"sum of two no="<<a+b<<"\n";
//     }
//     void sum(int x,int y, int z)
//     {
//    cout<<"sum of 3 no="<<x+y+z<<"\n";
//     }
//    void sum()
//    {
//    cout<<"program of function overloading\n";
//    } 
// };
// int main(){
// cybrom c;
// c.sum();
// c.sum(10,20);
// c.sum(10,20,30);
// cout<<"size"<<sizeof(c)<<"\n";
// }

// OPTIMIZATION CODE 

// function overloding 
#include<iostream>
using namespace std;
class cybrom{
    
   public:void sum(int x,int y)
    {
    
    // fun memory nhi leta hai 
    // memory leta hai datamember
    // function run time pe memory leta hai  
    cout<<"sum of two no="<<x+y<<"\n";
    }
    void sum(int x,int y, int z)
    {
   cout<<"sum of 3 no="<<x+y+z<<"\n";
    }
   void sum()
   {
   cout<<"program of function overloading\n";
   
   } 
};
int main(){
cybrom c;
c.sum();
c.sum(10,20);
c.sum(10,20,30);
cout<<"size= "<<sizeof(c)<<"\n";
}