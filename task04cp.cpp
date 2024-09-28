#include<iostream>
using namespace std;

void checkspeed(int speed);

int main()
{
   int speed;
   cout << "Speed(km/h): ";
   cin >> speed;
   checkspeed(speed); 
   return 0;
}

void checkspeed(int speed) 
{
   if (speed <= 100)
   {
      cout << "Perfect! You are doing good";
   }
   if (speed > 100)
   {
      cout << "Halt... YOU WILL BE CHALLENGED!!!";
   }
}