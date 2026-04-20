#include<iostream>
using namespace std;
void taxCaluculator(char type,float price);
int main()
{
    char type;
    float price;
    cout<<"Enter the Vehicle Code(M/E/S/V/T): ";
    cin>>type;
    cout<<"Enter the Vehicle Price: ";
    cin>>price;
    taxCaluculator(type,price);
    return 0;
}
void taxCaluculator(char type,float price)
{
   float taxrate=0;
   float taxamount=0;
   float finalprice=0;
   if(type=='M')
   {
       taxrate=6.0/100;
   }
   else if(type=='E')
   {
    taxrate=8.0/100;
   }
   else if(type=='S')
   {
    taxrate=10.0/100;
   }
   else if(type=='V')
   {
    taxrate=12.0/100;
   }
   else if(type=='T')
   {
    taxrate=15.0/100;
   }
   taxamount=price*taxrate;
   finalprice=price+taxamount;
   cout<<"the final price on a vehicle of type motorcycle after adding the tax is $"<<finalprice;


}