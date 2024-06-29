//increment operator & dicrement operator pretic
#include<iostream>
using namespace std;
int main()
// {
//     int a=10;
//      a=a++ + ++a; //10+1+1+10
//      cout<<"a="<<a<<"\n";
// }
// {
//     int a=10,b=20,c;
//     //10    //
//     c= a-- - a++ + --b - ++b + --a - b++ + ++a - b++;

//     cout<<"a="<<a<<"\n";//9
//     cout<<"b="<<b<<"\n";
//     cout<<"b="<<b<<"\n";
// }
// {
//     int a=10,b=20,c;
//        //10  //11  //19  //20  //9   //20
//     c= a++ + a-- + --b - ++b + --a - b--;

//     cout<<a<<"\n"; //9
//     cout<<b<<"\n"; //19
//     cout<<c;  //9
// }
{
    int a=0;
    int b;
        //0   //0   //1  //1
    b = a++ - --a + ++a - a--;
    cout<<a<<"\n"; //0
    cout<<b<<"\n"; //0
}