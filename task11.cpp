#include<iostream>
using namespace std;
void speedChecker(float speed);
main()
{
   float speed;
   cout<<"enter speed:";
   cin>>speed;
   speedChecker( speed);
   
}
void speedChecker(float speed)
{
    if(speed<100)
    {
        cout<<"Perfect!You're going good";
    }
     if(speed>=100)
    {
        cout<<"Halt...YOU WILL BE CHALLENGED!!!";
    }
}
    