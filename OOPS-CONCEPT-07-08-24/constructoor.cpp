// #include<iostream>
// using namespace std;
// class joy
// {
//  public:joy()
//  {
//     cout<<"joy class";
//  }   


// };
// int main()
// {
//     joy p;
// }

// destructor 

#include<iostream>
using namespace std;
class joy
{
 public:joy()
 {
    cout<<"joy class\n";
 }   
~joy()
{
    cout<<"pura saf kr diya\n";
}
public:void show()
{
    cout<<"wellcome\n";
}

};
int main()
{
    joy p;
    cout<<sizeof(p);
    p.show();
}