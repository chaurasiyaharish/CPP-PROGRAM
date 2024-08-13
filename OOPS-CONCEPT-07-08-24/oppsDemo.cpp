#include<iostream>
using namespace std;
class cybrom{
public:int a,b; // data member /(oops me variable ko declier krna data  )
void show(){

    cout<<"first program";

}
};
int main(){
    cybrom obj;
    obj.a=90; //
    cout<<obj.a<<"\n"; 
    obj.show();
    cout<<sizeof(obj);
}