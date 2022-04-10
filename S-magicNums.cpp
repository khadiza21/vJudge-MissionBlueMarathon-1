#include <iostream>
using namespace std;
int main()
{
   string num;
   int count = 0;
   cin >> num;

   // int length = num.length();
   for (int i = 0; i < num.size();)
   {

      if (num[i] == '1' && num[i + 1] == '4' && num[i + 2] == '4')

         i += 3;

      else if (num[i] == '1' && num[i + 1] == '4')

         i += 2;

      else if (num[i] == '1')

         i++;

      else
      {
         count++;
         break;
      }
   }

   if (count)
   {
      cout << "NO" << endl;
   }
   else
   {
      cout << "YES" << endl;
   };

   return 0;
}