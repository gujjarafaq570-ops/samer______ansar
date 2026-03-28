#include<iostream>
using namespace std;
 int main()
 {
    int sum=0,avg=0;
    for(int i=1;i<=5;i++)
    {
      sum=sum+i;   
    }
    avg=sum/5;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<avg<<endl;
 }