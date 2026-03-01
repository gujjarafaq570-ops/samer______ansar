#include<iostream>
using namespace std;
int main()
{
int age;
int moves, average_year;
cout<<" Enter age";
cin>> age;
cout<<"Enter moves";
cin>> moves;
average_year= age/(moves+1);
cout<<"Average year"<<average_year;
}