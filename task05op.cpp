#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void printName();

int main()
{
   system("cls");
   printName();
   gotoxy(0,36);
   return 0;
}

void printName()
{
   gotoxy(60,18);
   cout << "##########   ###    ###   ###    ###    ##    " << endl;
   gotoxy(60,19);   
   cout << "    ##      ## ##   #### ####   ## ##   ##    " << endl;
   gotoxy(60,20);
   cout << "    ##     #######  #########  #######  ##    " << endl;
   gotoxy(60,21);
   cout << "    ##     ##   ##  ## ### ##  ##   ##  ##    " << endl;
   gotoxy(60,22);
   cout << "##  ##     ##   ##  ##  #  ##  ##   ##  ##    " << endl;
   gotoxy(60,23);
   cout << " ####      ##   ##  ##     ##  ##   ##  ######" << endl;
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
