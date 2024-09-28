#include<iostream>
using namespace std;

void num_equal(int x, int y);

int main()
{
   int x, y;
   cout << "Enter first number: ";
   cin >> x;
   cout << "Enter second number: ";
   cin >> y;
   num_equal(x,y);
   return 0;
}

void num_equal(int x, int y)
{
   if(x==y)
   {
      cout << "True";
   }
   else
   {
      cout << "False";
   }
}

