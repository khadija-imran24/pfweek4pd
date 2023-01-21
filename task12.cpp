#include <iostream>
using namespace std;
main()
{
  int redNum;
  int whiteNum;
  int tulipsNum;
  float pricer;
  float pricew;
  float pricet;
  float total;
  float discount;
  float totalDiscount;
  cout<<"Enter the number of red roses :";
  cin>>redNum;
  cout<<"Enter the number of white roses: ";
  cin>>whiteNum;
  cout<<"Enter the number of tulips :";
  cin>>tulipsNum;
  pricer=redNum*2.00;
  pricew=whiteNum*4.10;
  pricet=tulipsNum*2.50;
  total=pricer+pricew+pricet;
  if(total>200)
  {
    discount=total*0.2;
    totalDiscount=total-discount;
    cout<<"Your total amount before discount was "<<total<<endl;
    cout<<"Your total amount after the discount is "<<totalDiscount<<endl;
  }
  if(total<=200)
  {
   cout<<"Your total amount is "<<total<<endl;
  }
  
}