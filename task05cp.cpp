#include<iostream>
using namespace std;

void possible_to_earn(int y_pos, int f_pos);

int main()
{
   int y_pos, f_pos;
   cout << "Enter your position: ";
   cin >> y_pos;
   cout << "Enter your friend's position: ";
   cin >> f_pos;
   possible_to_earn(y_pos, f_pos);
   return 0;
}

void possible_to_earn(int y_pos, int f_pos)
{
   if ((f_pos - y_pos) <= 6)
   {
      cout << "true";  
   }
   else
   {
      cout << "false";
   }
}

