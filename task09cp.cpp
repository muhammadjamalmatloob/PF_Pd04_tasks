#include<iostream>
using namespace std;

void check_TP(int people, int tp_rolls);

int main()
{
   int people, tp_rolls;
   cout << "Number of people in the household: ";
   cin >> people;
   cout << "Number of rolls of TP: ";
   cin >> tp_rolls;
   check_TP(people,tp_rolls);
   return 0;
}

void check_TP(int people, int tp_rolls)
{
   int tp_use_days;
   tp_use_days = (tp_rolls*500)/(people*57);
   if (tp_use_days >= 14)
   {
      cout << "Your TP will last " << tp_use_days << " days, no need to panic!";
   }
   else
   {
      cout << "Your TP will only last " << tp_use_days << " days, buy more!";
   }
}


