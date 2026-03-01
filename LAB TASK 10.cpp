#include<iostream>
using namespace std;
int main()
{
int win;
int draws; 
int losses;
cout<<" enter the no of wins";
cin>> win;
cout<<" Enter no of draws";
cin>> draws;
cout<<"enter no of losses";
cin>>losses;
int total_points;
total_points=(win*3)+(draws*1)+(losses*0);
cout<<"Pakistan has obtained"<<total_points<<"in Asia Cup Tournment"; 
}