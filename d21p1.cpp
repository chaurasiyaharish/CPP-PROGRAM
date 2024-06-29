//tabel using jumping statement without loop
#include<iostream>
using namespace std;
int main(){
    int n,a=1;
  cout<<"enter any no to genrate table\n";
  cin>>n;
  table:
  cout<<n*a<<"\n";
  a++;
  if(a<=10)
  {
    goto table;
  }

}