#include<iostream>
using namespace std;

void printMenu();

void calculate_aggregate(string name,float matric_marks,float inter_marks,float ecat_marks);

void compare_marks(string name_std1,int ecat_marks_std1,string name_std2,int ecat_marks_std2);

int main()
{
   system("cls");
   printMenu();
   cout << "Aggregate Calculation" << endl << endl;
   string name;
   float matric_marks, inter_marks, ecat_marks;
   cout << "Student's name: ";
   cin >> name;
   cout << "Matric Marks: ";
   cin >> matric_marks;
   cout << "Intermediate Marks: ";
   cin >> inter_marks;
   cout << "ECAT Marks: ";
   cin >> ecat_marks;
   calculate_aggregate(name,matric_marks,inter_marks,ecat_marks);
   string name1, name2;
   int ecat1,ecat2;
   cout << "Assigning Roll No(According to ECAT marks)" << endl << endl;
   cout << "Enter the name of first student: ";
   cin >> name1;
   cout << "Enter ECAT marks: ";
   cin >> ecat1;
   cout << "Enter the name of second student: ";
   cin >> name2;
   cout << "Enter ECAT marks: ";
   cin >> ecat2;
   compare_marks(name1,ecat1,name2,ecat2);
   return 0;
}

void printMenu()
{
   cout << "##   ## ###  ## #### ##   ## ###### #####   ####  #### ###### ##  ##      ####  #####  ### ### ####  ####   ####  ####  ####  ###  ##" << endl;
   cout << "##   ## #### ##  ##  ##   ## ##     ##  ## ##  ##  ##    ##    ####      ##  ## ##  ## #######  ##  ##  ## ##  ##  ##  ##  ## #### ##" << endl;
   cout << "##   ## #######  ##  ##   ## #####  ##  ## ##      ##    ##     ##       ###### ##  ## ## # ##  ##  ##     ##      ##  ##  ## #######" << endl;
   cout << "##   ## ## ####  ##  ##   ## ##     #####   ####   ##    ##     ##       ##  ## ##  ## ##   ##  ##   ####   ####   ##  ##  ## ## ####" << endl; 
   cout << "##   ## ##  ###  ##   ## ##  ##     ##  ##     ##  ##    ##     ##       ##  ## ##  ## ##   ##  ##      ##     ##  ##  ##  ## ##  ###" << endl;
   cout << " #####  ##   ## ####   ###   ###### ##  ## #####  ####   ##     ##       ##  ## #####  ##   ## #### #####  #####  ####  ####  ##   ##" << endl;
   cout << "                                                                                                                                     " << endl;
   cout << "      ### ###  ####  ###  ##  ####   ####  ###### ### ### ###### ###  ## ######      ####  ##  ##  ####  ###### ###### ### ###       " << endl;
   cout << "      ####### ##  ## #### ## ##  ## ##  ## ##     ####### ##     #### ##   ##       ##  ##  ####  ##  ##   ##   ##     #######       " << endl;
   cout << "      ## # ## ###### ####### ###### ##     #####  ## # ## #####  #######   ##       ##       ##   ##       ##   #####  ## # ##       " << endl;
   cout << "      ##   ## ##  ## ## #### ##  ## ## ### ##     ##   ## ##     ## ####   ##        ####    ##    ####    ##   ##     ##   ##       " << endl;
   cout << "      ##   ## ##  ## ##  ### ##  ## ##  ## ##     ##   ## ##     ##  ###   ##           ##   ##       ##   ##   ##     ##   ##       " << endl;
   cout << "      ##   ## ##  ## ##   ## ##  ##  ####  ###### ##   ## ###### ##   ##   ##       #####    ##   #####    ##   ###### ##   ##       " << endl << endl;
}

void calculate_aggregate(string name,float matric_marks,float inter_marks,float ecat_marks)
{
   float aggregate = matric_marks/1100*30 + inter_marks/550*30 + ecat_marks/400*40;
   cout << endl << "Name: " << name << endl;
   cout << "Aggregate: " << aggregate << endl << endl;
}

void compare_marks(string name_std1,int ecat_marks_std1,string name_std2,int ecat_marks_std2)
{
   int r1,r2;
   if (ecat_marks_std1>ecat_marks_std2)
   {
      r1 = 1;
      r2 = 2;
   }
   else
   {
      r1 = 2;
      r2 = 1;
   }
   cout <<"Name: " << name_std1 << endl;
   cout <<"Roll no. " << r1 << endl;
   cout <<"Name: " << name_std2 << endl;
   cout <<"Roll no. " << r2;
}


