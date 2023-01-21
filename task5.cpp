#include<iostream>
#include<windows.h>
using namespace std;
void printName(); 
void gotoxy(int x,int y);

main()
{
  system("cls");
  gotoxy(17,19);
  printName();
}
void printName()
{

  cout<<"*   *   *     *  *******  ***    *        *  *******"<<endl;
  gotoxy(17,20);
  cout<<"*  *    *     *  *     *  *  *   *        *  *     *"<<endl;
  gotoxy(17,21);
  cout<<"* *     *     *  *     *  *   *  *        *  *     *"<<endl;
  gotoxy(17,22);
  cout<<"**      *******  *******  *    * *        *  *******"<<endl;
  gotoxy(17,23);
  cout<<"* *     *     *  *     *  *    * *        *  *     *"<<endl;
  gotoxy(17,24);
  cout<<"*  *    *     *  *     *  *   *  *  *     *  *     *"<<endl;
  gotoxy(17,25);
  cout<<"*   *   *     *  *     *  ***    *  *******  *     *"<<endl;
  gotoxy(17,26);
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}