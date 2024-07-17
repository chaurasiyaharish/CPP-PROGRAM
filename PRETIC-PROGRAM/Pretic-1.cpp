// wap to findout the your age   by if condition
//  #include<iostream>
//  using namespace std;
//  int main ()
//  {
//      int a;
//      cout<<"enter your age\n";
//      cin>>a;
//      if(a>0 && a<100)
//      {
//          cout<<"your age = "<<a;
//      }
//  }
// single condition me ydi koi invalid age enter krta hai to vo age bhi print ho jAYEGI to fir eske bad else part ko bhi shamil kiya gya
// same question if else condition   OR BI  condition
//  #include<iostream>
//  using namespace std;
//  int main ()
//  {
//      int a;
//      cout<<"enter your age\n";
//      cin>>a;
//      if(a>0 && a<100)
//      {
//          cout<<"your age = "<<a;
//      }
//      else{
//          cout<<"ivalid age";
//      }
//  }

// Q-2 WAP to find out the given charector is consonent and vowel.

// #include<iostream>
// using namespace std;
// int main ()
// {
//     char n;
//     cout<<"enter any charector\n";
//     cin>>n;
//     if(n== 'a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U')
//     {
//         cout<<n<<" =is vowel charector";
//     }
//     else{
//         cout<<n<<" =is consonent charector";
//     }
// }

// ydi yha hm = ya ; ya 0 ya 3 enter krege to vo bhi consonent hi print hoga but ye to galat hai na fir esko sahi krne ke liye nested condition ka use krege

// Q-2 WAP to find out the given charector is consonent and vowel.

// #include<iostream>
// using namespace std;
// int main ()
// {
//     char n;
//     cout<<"enter any charector\n";
//     cin>>n;
//     if(n== 'a' && n=='e' && n=='i' && n=='o' && n=='u' && n=='A' && n=='E' && n=='I' && n=='O' && n=='U')
//     {
//         cout<<n<<" =is vowel charector";
//     }
//     else{
//         cout<<n<<" =is consonent charector";
//     }
// }

// Q-3  WAp to find the largest number between three.

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int a,b,c;
//     cout<<"enter three number\n";
//     cin>>a>>b>>c;
//     if(a>=b && a>=c)
//     {
//         cout<<"largest number is = "<<a;
//     }
//     else if(b>=a && b>=c)
//     {
//          cout<<"largest number is = "<<b;
//     }
//     else
//     {
//          cout<<"largest number is = "<<c;
//     }
// }

// Q-2 wap to  check the given number even or odd.

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int a;
//     cout<<"enter any number\n";
//     cin>>a;
//     if(a%2==0)
//     {
//         cout<<a<<" is even number";
//     }
//     else{
//         cout<<a<<" is odd number";
//     }
// }

// Q-3 Wap to find out the given charactor consonent and vowel.

// #include <iostream>
// using namespace std;
// int main()
// {
//     char c;
//     cout << "enter any charctor\n";
//     cin >> c;
//     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
//     {
//         cout << c << " is vowel charctor";
//     }
//     else
//     {
//         cout << c << " is cosonent charctor";
//     }
// }

// nested if else
//  Q-4 wap using  nested if else enter the password if correct enter the otp if correct get the output as owner else froud/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int otp,pass;
//     cout<<"enter otp \n";
//     cin>>otp;
//     if(otp==12345)
//     {
//         cout<<"enter your password\n";
//         cin>>pass;
//         if(pass==123456)
//         {
//             cout<<"owner";
//         }
//         else{
//             cout<<"froud";
//         }
//     }
//     else{
//         cout<<"otp does not match";
//     }
// }

// Q-5 wap to using nested if else that the age and persentage entered is eligible or not.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;
//     float per;
//     cout<<"enter your age\n";
//     cin>>age;
//     if(age >18 && age<30)
//     {
//     cout<<"enter your persentage\n";
//     cin>>per;
//     if(per>50 && per<100)
//     {
//         cout<<"you are eligible";
//     }
//     else{
//         cout<<"not eligible";
//     }
//     }
//     else{
//        cout<<"invalid age";
//     }
// }
//
// Q-6 WAP using if else know that the year entered is a leep year or not.
//
// #include <iostream>
// using namespace std;
// int main()
// {
//     int year;
//     cout << "enter year \n";
//     cin >> year;
//     if (year % 4 == 0 && year % 100 != 0)
//     {
//         cout << " is leep year";
//     }
//     else
//     {
//         cout << " is not leep year";
//     }
// }
//
//
// Q-7 Wap to check the given number zero,positive,negative.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"enter any number\n";
//     cin>>a;
//     if(a==0)
//     {
//         cout<<" zero number";
//     }
//     else if(a>0)
//     {
//         cout<<"positive number";
//     }
//     else{
//         cout<<"negative number";
//     }
// }
// Q-8 wap to given the three number then check the largest number .
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int a,b,c;
//     cout<<"enter three number\n";
//     cin>>a>>b>>c;
//     if(a>b && a>c)
//     {
//         cout<<"largest number is = "<<a;
//     }
//     else if(b>a && b>c)
//     {
//          cout<<"largest number is = "<<b;
//     }
//     else
//     {
//          cout<<"largest number is = "<<c;
//     }
// }

// Q-9 wap to check bill using else if condition

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,bill;
//     cout<<"enter your meter reading\n";
//     cin>>n;
//     if(n>=1 && n<=100)
//     {
//         bill=n*5;
//     }
//     else if(n>100 && n<=500)
//     {
//         bill=n*7;
//     }
//     else if(n>500)
//     {
//         bill=n*10;
//     }
//     else{
//         cout<<"invalid meter reading";
//     }
//     cout<<"bill  :"<<n+(bill*20/100);
// }

// q-10 WAp to display the sum of the value between 50 to 1 using do while loop

// #include<iostream>
// using namespace std;
// int main()
// {
//     int s=0,a=50;
//     do{
//         s=s+a;
// cout<<s<<"\t";   ydi stape by stape show karana ho to jaise 50 99 147 194
//         a--;
//     }while(a>=1);
// cout<<"total sum :"<<s;
// }

// Q-11 WAP to display the genrate a table any number using do while loop

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, a = 1;
//     cout << "enter any number \n";
//     cin >> n;
//     do
//     {
//         cout << n * a<<"\n";
//         a++;
//     } while (a <= 10);
// }

// WAP to display the number between 1 to 10 using while loop

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=1;
//     while(a<=10)   
//     { 
//         cout<<a<<"\n";
//         a++;
//     }
// }

//WAP to find  the given number of power and base  using while loop


#include <iostream>
using namespace std;
int main()
{
    int power,base, r=1;
    cout<<"enter base\n";
    cin>>base;
    cout<<"enter power\n";
    cin>>power;
    while(power>=1)
    {
    r=r*base;
    power--;
    }
    cout<<"result : "<<r;
}
