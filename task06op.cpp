#include<iostream>
#include<windows.h>
using namespace std;

void H();
void A();
void S();
void N();

int main()
{
   H();
   A();
   S();
   S();
   A();
   N();
   return 0;
}

void H()
{
   cout << "##    ##" << endl;
   cout << "##    ##" << endl;
   cout << "########" << endl;
   cout << "##    ##" << endl;
   cout << "##    ##" << endl;
   cout << "##    ##" << endl << endl;
}

void A()
{
   cout << "  ###  " << endl;
   cout << " ## ## " << endl;
   cout << "#######" << endl;
   cout << "##   ##" << endl;
   cout << "##   ##" << endl;
   cout << "##   ##" << endl << endl;
}

void S()
{
   cout << " ##### " << endl;
   cout << "##   ##" << endl;
   cout << "##     " << endl;
   cout << " ##### " << endl;
   cout << "     ##" << endl;
   cout << "###### " << endl << endl;
}

void N()
{
   cout << "###  ##" << endl;
   cout << "#### ##" << endl;
   cout << "#######" << endl;
   cout << "## ####" << endl;
   cout << "##  ###" << endl;
   cout << "##   ##" << endl;
}

