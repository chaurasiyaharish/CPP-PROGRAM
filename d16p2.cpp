// WAP 
#include <iostream>
using namespace std;
int main()
{
   int adhar, voter, pan, pwd;
   cout << "enter adhar your number\n";
   cin >> adhar;
   if (adhar == 123456789)
   {
      cout << "enter ur voter id number\n";
      cin >> voter;
      if (voter == 12345)
      {
         cout << "enter ur pan number\n";
         cin >> pan;
         if (pan == 1234)
         {
            cout << "enter pwd\n";
            cin>>pwd; 
            if (pwd == 2024)
            {
               cout << "get ur pasport\n";
            }
            else
            {
               cout << "incorect pwd";
            }
         }
         else
         {
            cout << "missing pan number";
         }
      }
      else
      {
         cout << "second phase is not cleared";
      }
   }
   else
   {
      cout << "OUT";
   }
}
