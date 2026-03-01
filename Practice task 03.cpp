#include<iostream>
using namespace std;
int main ()
{
int minutes;
int frames_per_second;
cout<<" enter minutes";
cin>> minutes;
cout<<" enter fps";
cin>>frames_per_second;
int Total_frames;
Total_frames=minutes*60*frames_per_second;
cout<<"Total_frames"<<Total_frames;
}