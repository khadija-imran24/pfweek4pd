#include<iostream>
using namespace std;
void airline(string country,float price);
main()
{
   string country;
   float price;
   while(true)
   {
   cout<<"enter country:";
   cin>>country;
   cout<<"enter ticket price:";
   cin>>price;
   airline(country, price);
   }
}
void airline(string country,float price)
{
    float discount;
    if(country=="pakistan")
    {
        discount=price-(price*0.05);
        cout<<"total:"<<discount<<endl;
    }
       if(country=="ireland")
    {
        discount=price-(price*0.10);
        cout<<"total:"<<discount<<endl;
    }
     if(country=="india")
    {
        discount=price-(price*0.20);
        cout<<"total:"<<discount<<endl;
    }
     if(country=="england")
    {
        discount=price-(price*0.30);
        cout<<"total:"<<discount<<endl;
    }
     if(country=="canada")
    {
        discount=price-(price*0.45);
        cout<<"total:"<<discount<<endl;
    }
}