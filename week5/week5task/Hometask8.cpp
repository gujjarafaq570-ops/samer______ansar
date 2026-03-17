#include<iostream>
using namespace std;
int main()
{  
     int n,count=0;
     cout<<"Enter total no of digit: ";
     cin>>n;
     for(int i=n;i>0;i=i/10)
     {
        count=count+1;
     }
     cout<<"the total digit is"<<count;
}     