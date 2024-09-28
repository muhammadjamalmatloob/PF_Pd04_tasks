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
   movePlayer(x,y);
   gotoxy(0,9);
   return 0;
}

void movePlayer(int x, int y)
{
   gotoxy(x,y);
   cout << "P";
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

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
