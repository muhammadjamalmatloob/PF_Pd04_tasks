#include<iostream>
using namespace std;

void longest_time(int hr, int min);

int main()
{
   int hr, min;
   cout << "Enter the number of hours: ";
   cin >> hr;
   cout << "Enter the number of minutes: ";
   cin >> min;
   longest_time(hr,min);
   return 0;
}

void longest_time(int hr, int min)
{
   if (hr*60>min)
   {
      cout << hr << " hrs is the long time.";
   }
   else
   {
      cout << min << " min is the long time.";
   }
}

