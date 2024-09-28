#include<iostream>
#include<windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
void movePlayer(int x, int y);

int main()
{
   int x = 4,y = 4;
   system("cls");
   printMaze();
   while(true)
   {
      movePlayer(x,y);
      x = x + 1;
      if (x == 21)
      {
         x = 4;
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
   cout << "P";
   Sleep(500);
   gotoxy(x,y);
   cout << " ";
}

void gotoxy(int x, int y)
{
  COORD coordinate;
  coordinate.X = x;
  coordinate.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}
