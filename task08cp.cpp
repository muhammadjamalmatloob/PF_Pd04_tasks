#include<iostream>
using namespace std;

void pet(int holidays);

int main()
{
   int holidays;
   cout << "Enter number of holidays: ";
   cin >> holidays;
   pet(holidays);
   return 0;
}

void pet(int holidays)
{
   int work_days, game_time, dif_from_norm;
   work_days = 365-holidays; 
   game_time = holidays*127 + work_days*63;
   if (game_time <= 30000)
   {
      cout << "Tom sleeps well" << endl;
      dif_from_norm = 30000-game_time;
      cout << dif_from_norm/60 << " hours and " << dif_from_norm%60 << " minutes less for play";
   }
   else if (game_time>30000)
   {
      cout << "Tom will run away" << endl;
      dif_from_norm = game_time-30000;
      cout << dif_from_norm/60 << " hours and " << dif_from_norm%60 << " minutes more for play";
      
   }
}




