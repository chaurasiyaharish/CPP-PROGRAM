  //dyanemic array 
  // #include<iostream>
  // using namespace std;
  // int main ()
  // {
  //    int a[5] ={1,2,3,4,5};
  //    for(int i=0;i<5;i++)
  //    {
  //       a[i]=a[i]-2;
  //       cout<<a[i]+1<<"\t";
  //    }
  // }

  //sirf even number ka data print ho 
  //WAP to display only even value is a array 
  //  #include<iostream>
  // using namespace std;
  // int main ()
  // {
  //    int a[5] ={10,21,30,41,5};
  //    for(int i=0;i<5;i++)
  //    {
  //    if(a[i]%2==0){
  //       cout<<a[i]<<"\t";
  //    }
  //    }
  // }

   //WAP to display only odd value is a array 
  // #include<iostream>
  // using namespace std;
  // int main ()
  // {
  //    int a[5] ={10,21,30,41,5};
  //    for(int i=0;i<5;i++)
  //    {
  //    if(a[i]%2!=0){
  //       cout<<a[i]<<"\t";
  //    }
  //    }
  // }

   //WAP to display only even value is a array 
   //sabhi data ka sum
  // #include<iostream>
  // using namespace std;
  // int main ()
  // {
  //    int a[5] ={10,21,30,41,5};
  //    int sum=0;
  //    for(int i=0;i<5;i++)
  //    {
  //    {
  //      sum= sum+a[i];
  //    }
  //    }
  //     cout<<sum<<"\t";
  // }
  // 
  // WAP to findout the minmum value  given in a array
  // #include<iostream>
  // using namespace std;
  // int main ()
  // {
  //    int a[5] ={10,21,30,41,5};
  
  //    for(int i=5;i>5;i++){
  //     //  sum= sum+a[i];
  //     cout<<a[i]<<"\t";
  //    }
  // }

  //   #include<iostream>
  // using namespace std;
  // int main ()
  // {
  //    int a[5] ={10,21,0,41,0};
  //    int s = sizeof(a)/sizeof(a[0]);
  //    for(int i=0;i>s;i++)
  //   {
  //     if(a[i]==0)
  //     {a[i]}
  //   }
  //     cout<<a[i]<<"\t";
  // }


  //WAp to find the second largest number in array

  //second largest number in array 

#include <iostream>
using namespace std;
int main()
{
    int arr[]={34,2,5,4,3,66};
    int s=sizeof(arr)/sizeof(arr[0]);
    int max1=0;
    int max2=0;
    
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
	cout<<"second largest number is "<<max2;
}
