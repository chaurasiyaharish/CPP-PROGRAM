//what is array 
// collection of similer data type is called array

// #include<iostream>
// using namespace std;
// int main()
// {
// int arr[5]={4,6,9,7,4};
// arr [5]=500; //keval 5 tk hi loop chalega
// for(int i=0;i<=5;i++)
// {
//     cout<<arr[i]<<"\t";
// }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// int arr[5]; 
// cout<<"enter 5 value\n";
// for(int i=0;i<5;i++)
// {
//     cin>>arr[i];
// }
// cout<<"stored data in array\n";
// for(int i=0;i<5;i++)
// {
//     cout<<arr[i]+1<<"\t";
// }
// cout<<"done\n";
// }
// esme array me data store nhi ho rha hai keval 1 plush kra ke print kra ja rha hai 

//koi bhi data 
// #include<iostream>
// using namespace std;
// int main()
// {
// int arr[5]; 
// cout<<"enter 5 value\n";
// for(int i=0;i<5;i++)
// {
//     cin>>arr[i];
// }
// cout<<"stored data in array\n";
// for(int i=0;i<5;i++)
// {
//     cout<<arr[i]<<"\t";
// }
// cout<<"done\n";
// }

//koi bhi data enter kro vo 1 plus ho ke array me store bhi ho WRA

#include<iostream>
using namespace std;
int main()
{
int arr[5]; 
cout<<"enter 5 value\n";
for(int i=0;i<5;i++)
{
    cin>>arr[i];
}
cout<<"stored data in array\n";
for(int i=0;i<5;i++)
{
    arr[i]=arr[i]+1;
    cout<<arr[i]<<"\t";
}
cout<<"done\n";
}