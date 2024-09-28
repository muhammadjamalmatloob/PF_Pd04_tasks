#include<iostream>
#include<windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
void movePlayer(int x, int y);

int main()
{
   system("cls");
   printMaze();
   while(true)
   {
      int x = 8, y = 1;
      while(y<8)
      {
         movePlayer(x,y);
         y = y + 1;
      }
      y = y - 2;
      while(y>1)
      {
         movePlayer(x,y);
         y = y - 1; 
      }
   } 
   return 0;
}

void printMaze()
{
   cout << "########################" <<endl;
   cout << "#                      #" <<endl;
   cout << "#                      #" <<endl;
   cout << "#                      #" <<endl;
   cout << "#                      #" <<endl;
   cout << "#                      #" <<endl;
   cout << "#                      #" <<endl;
   cout << "#                      #" <<endl;
   cout << "########################" <<endl;
}

void movePlayer(int x, int y)
{
   gotoxy(x,y);
   cout << "patrol";
   Sleep(500);
   gotoxy(x,y);
   cout << "      ";
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
