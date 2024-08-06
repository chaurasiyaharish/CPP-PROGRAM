// // WAP to cheng lower case to upper case
// #include<iostream>
// //#include<string.h>
// using namespace std;
// int main(){
//      string str = "hello";
//      for(int i =0; i<=str.length();i++)
//      {  
//         if(str[i]>='a' && str[i]<='z')
//      {
//        str[i]= str[i]-'a'+'A'; 
//      }
        
//      }
//      cout<<str;
// }

// #include<iostream>
// //#include<string.h>
// using namespace std;
// int main(){
//      string str = "HELLO";
//      for(int i =0; i<str.length();i++)
//      {  
//         if(str[i]>='A' && str[i]<='Z')
//      {
//        str[i]= str[i]-'A'+'a'; 
//      }
        
//      }
//      cout<<str;
// }

#include<iostream>
//#include<string.h>
using namespace std;
int main(){
    
     for(int i =65; i<=97;i++)
     { 
        cout<<i<<"="<<char(i)<<"\t";
     }
    
}