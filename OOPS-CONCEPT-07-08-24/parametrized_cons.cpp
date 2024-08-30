// parametrized constructor
//
// #include<iostream>
// using namespace std;
// class atm
// {
//     int code,pwd;
//     public:atm(int c,int p)
//     {
//         code = c;
//         pwd = p;
//     }
//     void show()
//     {
//         cout<<"code="<<code<<"\t";
//         cout<<"pwd="<<pwd<<"\t";
//     }
// };
// int main(){
// int c,p;
// cout<<"enter code\n";
// cin>>c;
// cout<<"enter pwd\n";
// cin>>p;
// atm obj(c,p);
// obj.show();
// }

// constructor over loding 

#include<iostream>
using namespace std;
class atm
{
    int code,pwd;
    public:atm()
    {
      cout<<"wellcome to my\n";
    }
    atm(int c,int p)
    {
        code = c;
        pwd = p;
    }
    void show()
    {
        cout<<"code="<<code<<"\t";
        cout<<"pwd="<<pwd<<"\t";
    }
};
int main(){
    atm k;
int c,p;
cout<<"enter code\n";
cin>>c;
cout<<"enter pwd\n";
cin>>p;
atm obj(c,p);
obj.show();
}