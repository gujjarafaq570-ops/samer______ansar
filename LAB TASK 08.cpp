#include<iostream>
using namespace std;
int main ()
{
int voltage;
int current;
cout<<"Enter Voltage(in volts)";
cin>> voltage;
cout<< "Enter Current (in Amperes)";
cin>> current;
int power;
power=voltage*current;
cout<<" The power is "<< power <<"watts";
}