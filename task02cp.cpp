#include<iostream>
using namespace std;

void Reverse(string a);

int main()
{
   string s;
   cout << "Enter true or false: ";
   cin >> s;
   Reverse(s);
   return 0;
}

void Reverse(string a)
{
   if (a == "True" || a == "true")
   {
      cout << "False";
   }
   if (a == "False" || a == "false")
   {
      cout << "True";
   }
}
