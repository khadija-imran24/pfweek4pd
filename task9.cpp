#include<iostream>
using namespace std;
void reverse(string input);
main()
{
   string input;
   cout<<"input true or false:";
   cin>>input;
   reverse( input);
}
void reverse(string input)
{
    if(input=="true")
    {
        cout<<"false";
    }
     if(input=="false")
    {
        cout<<"true";
    }
}