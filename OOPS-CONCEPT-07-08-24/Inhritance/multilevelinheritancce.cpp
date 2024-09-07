// in a multi level inheritance we can creat a bmore then two 
//class and each sub class inherit the property of previous class
// #include<iostream>
// using namespace std;
// class RBI {
//     public:void rmsg(){
//        cout<<"\n RBI \n";

//     }
   
// };
// class SBI:public RBI {
//     public:void smsg(){
//        cout<<"\n SBI \n";

//     } 
// };
// class CUST:public SBI {
//     public:void cmsg(){
//        cout<<"\n CUSTOMER\n";

//     } 
// };
// int main(){
// CUST c;
// c.smsg();
// c.rmsg();
// c.cmsg();
// }


// eska excution process kya hoga cunstructor banane pr

// #include<iostream>
// using namespace std;
// class RBI {
//     public:void rmsg(){
//        cout<<"\n RBI \n";

//     }
//    ~RBI(){
//     cout<<"RBI DEL\n";
//    }
// };
// class SBI:public RBI {
//     public:SBI(){
//        cout<<"\n SBI \n";

//     } 
//       ~SBI(){
//     cout<<"SBI DEL\n";
//    }
// };
// class CUST:public SBI {
//     public:CUST (){
//        cout<<"\n CUST\n";

//     } 
//       ~CUS(){
//     cout<<"CUS DEL\n";
//    }
// };
// int main(){
// CUST c;
// c.smsg();
// c.rmsg();
// c.cmsg();
// }