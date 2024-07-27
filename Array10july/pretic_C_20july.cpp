// dynamic program

#include <iostream>
using namespace std;
int main()
{

    int arr[] ={1,2,3,4,5,6};
   // int s = sizeof (arr)/sizeof(arr[0]);
    cout << "enter any five value:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "stored data in array\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
}