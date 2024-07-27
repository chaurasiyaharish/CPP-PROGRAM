// nameingconvention
//function ka name verb type ka hona chahiye
//aur aydi name bda hai to camelcase me aur underscore bhi lagana chahiye
//ex. incrementSalary,student_data etc

#include<iostream>
using namespace std;
int increment(){
    return 1000;
}
int main(){
   cout<<increment()+5000;
}