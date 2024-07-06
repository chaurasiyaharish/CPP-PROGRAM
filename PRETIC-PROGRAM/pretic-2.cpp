// #include<iostream>
// using namespace std;
// int main()
// {
//     int n1,n2;
//     cout<<"enter any two number\n";
//     cin>>n1>>n2;
//     while(n1 != n2)
//     {
//         if(n1>n2)
//         {
//             n1=n1-n2;
//         }
//         else{
//             n2=n2-n1;
//         }
//     }
//     cout<<"HCF of "<<n1;
// }

// q-10 WAp to display the sum of the value between 1 to 10 using do while loop 

#include<iostream>
using namespace std;
int main()
{
    int s=0,a=1;
    do{
        s=s+a;
        a++;
    }while(a<=10);

cout<<"total sum :"<<s;
}