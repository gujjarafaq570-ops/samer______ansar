#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    while(num>=0)
    {
        cout<<"Enter a number: ";
        cin>>num;
        sum=sum+num;
    }
    cout<<"Sum of the positive no is "<<sum;
}