#include<iostream>
using namespace std;
main ()
{
string name;
int weight_loss;
cout<<"Enter the name of the Person:";
cin>>name;
cout<<"enter the target to weight loss in kg";
cin>>weight_loss;
int total_days;
total_days=weight_loss*15;
cout<<name<<"will need"<<total_days<<"to lose"<<weight_loss<<"kg of weight by following the doctors suggestions";
}