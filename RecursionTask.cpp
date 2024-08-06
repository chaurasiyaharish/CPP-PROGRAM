// Q -1 WAP for factorial of any number using Recursion

// #include<iostream>
// using namespace std;
// int fact (int n)
// {
//     if(n==1)
//     {
//         return 1;
//     }
// int k=n*fact(n-1);
// return k;
// }
// int main()
// {
//   cout<<fact(6);  
// }

// Q-2: WAP for genrate base and power using recursion
//06-08-24
#include<iostream>
using namespace std;
int fun (int base, int power)
{
    if(base==0)
    {
        return 0;
    }
    if(power==0)
    {
      return 1;
    }
    return base*fun(base,power-1);
//int result =base*fun(base,power-1
//return 1;
}
int main()
{
  int power,base;
  cout<<"enter base\n";
  cin>>base;
  cout<<"enter power\n";
  cin>>power; 
  cout<<fun(base,power);

}