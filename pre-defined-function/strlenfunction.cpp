#include<iostream>
using namespace std;
#include<string.h>
int main(){
char s[40];
char n[30]="BHOPAL";
cout<<strrev(n);// string reverse
cout<<"enter any number\n";
cin>>s;
cout<<"length="<<strlen(s)<<"\n"; // string length
cout<<"capital letter="<<strupr(s)<<"\n"; //string upper
cout<<"small letter="<<strlwr(s)<<"\n"; //string lower
cout<<"merg="<<strcat(s,n)<<"\n"<< // string concatenation
strcpy(s,n);// string copy
cout<<"s="<<s<<"\n";
cout<<"enter password\n";
cin>>s;
if(stricmp(s,"sunday")==0)//string compare
{
    cout<<"matched";
}
else{
    cout<<"mis matched";
}

}