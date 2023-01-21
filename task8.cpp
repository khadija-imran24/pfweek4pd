#include<iostream>
#include<windows.h>
using namespace std;
void isEqual(int x,int y);
main()
 {
 int x;
 int y;
 isEqual(x,y);
 }
void isEqual(int number1,int number2)
{ 
  cout<<"enter 1 number:";
  cin>>number1;
  cout<<"enter 2 number:";
  cin>>number2;
if (number1==number2)
 {
  cout<<"true";
 }
if (number1!=number2)
 {
  cout<<"false";
 } 
}   