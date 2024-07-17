// WAP to findout the second lergest number in the given array

#include<iostream>
using namespace std;
int main (){

    int arr[]= {34,35,64,86,-76};
    int s=sizeof(arr)/sizeof(arr[0]);
    int max1=arr[0];
    //int max1=INT_MIN;
    int max2=arr[0];
    for(int i=0;i<s;i++)
    {
        if(arr[i]>max1)
        {
          max2=max1;
          max1=arr[i];
        }
        if(arr[i]>max2 && arr[i]<max1)
        {
            max2=arr[i];
        }
    }
   cout<<"second largest no="<<max2;                         

}

// ydi esme sabhi value mines me ho tb ye kise dhure ga 

//Q-2 WAP to display the array in assending oder.


#include<iostream>
using namespace std;
int main(){
    
}