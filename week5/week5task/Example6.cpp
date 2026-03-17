#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"Enter a Positive Number";
    cin>>number;
    while(number<=0)
    {
        cout<<"error "<< number<<"is not a Positive value"<<endl;
        cout<<"Please enter a Positive Number";
        cin>>number;
    }
    cout<<"Program ends";
}