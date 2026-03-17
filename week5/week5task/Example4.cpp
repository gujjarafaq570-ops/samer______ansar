#include<iostream>
using namespace std;
int main()
{
 int i,n,count=0;
 cout<<"Enter the total digit";
 cin>>n;
 for(i=n;i>0;i=i/10)
{
    count=count+1;
}
cout<<"total no of digit: "<<count;
}