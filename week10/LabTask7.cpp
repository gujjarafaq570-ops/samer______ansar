#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float distance,angle,radians,height;
    cout<<"Enter the distance from the base of the tree ";
    cin>>distance;
    cout<<"Enter the angle of elevation(in degree): ";
    cin>>angle;
    radians=angle/57.2;
    height=distance*tan(radians);
    cout<<"The height of the tree is: "<<height;
}