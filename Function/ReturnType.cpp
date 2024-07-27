// nameingconvention
//function ka name verb type ka hona chahiye
//aur aydi name bda hai to camelcase me aur underscore bhi lagana chahiye
//ex. incrementSalary,student_data etc

// #include<iostream>
// using namespace std;
// int increment() // return & withoutparameter
// {
//     return 1000;
// }
// int main(){
//     int r;
//     r = increment(); // esme value store bhi ho rhi hai 
//    cout<<r+5000;
// }

//   return & withparameter
#include<iostream>
using namespace std;
int product(int p1, int p2) // return & with parameter
{
    int a = p1*500;
    int b = p2*500;
    return a+b;
}
int main(){
    int prod1,prod2; 
   cout<<"ennter quantity of mobile\n";
   cin>>prod1;
    cout<<"ennter quantity of pendrive\n";
   cin>>prod2;
   cout<<product(prod1,prod2);
}