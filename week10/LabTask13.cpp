#include<iostream>
using namespace std;
void addMin(int hours, int min);
int main()
{
   int hours,min;
   cout<<"Enter hours :";
   cin>>hours;
   cout<<"Enter minutes : ";
   cin>>min;
   addMin(hours,min);
   return 0;
}
void addMin(int hours,int min)
{
    min=min+15;
    if(min>60)
    {
        min=min-60;
        hours=hours+1;
    }
    else if(hours>24)
    {
        hours=0;
    }
    cout<<hours<<":"<<min;
}