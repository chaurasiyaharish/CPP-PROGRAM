//wap to findout the your age   by if condition
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int a;
//     cout<<"enter your age\n";
//     cin>>a;
//     if(a>0 && a<100)
//     {
//         cout<<"your age = "<<a;
//     }
// }
//single condition me ydi koi invalid age enter krta hai to vo age bhi print ho jAYEGI to fir eske bad else part ko bhi shamil kiya gya
//same question if else condition   OR BI  condition 
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int a;
//     cout<<"enter your age\n";
//     cin>>a;
//     if(a>0 && a<100)
//     {
//         cout<<"your age = "<<a;
//     }
//     else{
//         cout<<"ivalid age";
//     }
// }


//Q-2 WAP to find out the given charector is consonent and vowel.

#include<iostream>
using namespace std;
int main ()
{
    char n;
    cout<<"enter any charector\n";
    cin>>n;
    if(n== 'a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U')
    {
        cout<<n<<" =is vowel charector";
    }
    else{
        cout<<n<<" =is consonent charector";
    }
}

//ydi yha hm = ya ; ya 0 ya 3 enter krege to vo bhi consonent hi print hoga but ye to galat hai na fir esko sahi krne ke liye nested condition ka use krege