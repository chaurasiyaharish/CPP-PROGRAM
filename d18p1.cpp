#include<iostream>
using namespace std;
int main()
{
    int p,c,m,t;
    float per;
    cout<<"enter marks of physics\n";
    cin>>p;
     cout<<"enter marks of chemestry\n";
    cin>>c;
     cout<<"enter marks of math\n";
    cin>>m;
    t=p+c+m;
    per=t/3;
    if(p<0 || c<0 || m<0)
    {
        cout<<"invalid marks\n";
    }
    else if(p<35 && c>=35 && m>=35)
    {
        cout<<"supply in phy";
    }
        else if(c<35 && p>=35 && m>=35)
    {
        cout<<"supply in chem";
    }
        else if(m<35 && p>=35 && c>=35)
    {
        cout<<"supply in math";
    }
        else if(p<35 && c<35 && m>35)
    {
        cout<<"fail";
    }
        else if(p>35 && c<35 && m<35)
    {
        cout<<"fail";
    }
        else if(p<35 && c>35 && m<35)
    {
        cout<<"fail";
    }
    else if(per>=60 && per<=100)
    {
        cout<<"1st div="<<per<<"%";
    }
      else if(per>=50 && per<60)
    {
        cout<<"2nd div="<<per<<"%";;
    }
      else if(per>=35 && per<50)
    {
        cout<<"3st div="<<per<<"%";
    }
    else
    {
        cout<<"fail";
    }


}