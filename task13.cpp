#include<iostream>
using namespace std;
void  tomcat(int holidays);
main()
{
   int holidays;
   cout<<"enter holidays:";
   cin>>holidays;
   tomcat( holidays);
   
}
void tomcat(int holidays)
{
 int workT;
 int day;
 int freeT;
 int totalT;
 int tomN;
 int hours;
 int H2;
 int min;
 day=365-holidays;
 workT=day*63;
 freeT=holidays*127;
 totalT=workT+freeT;
 tomN=30000-totalT;
 hours=tomN/60;
 H2=hours*60;
 min=tomN-H2;
 if(tomN<1250)
 {
   hours=hours-(2*hours);
   min=min-(min*2);
   cout<<"tom will run away"<<hours<<"hours and"<<min<<"minutes for play";

 }
 if(tomN>=1250)
 {
    cout<<"tom will sleep for"<<hours<<"hours and"<<min<<"minutes for play";
 }
}
    