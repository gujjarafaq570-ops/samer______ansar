#include<iostream>
using namespace std;
void caluculatePool(int vol,int flowrate1 , int flowrate2, float hours);
int main()
{
    int vol,flowrate1,flowrate2;
    float hours;
    cout<<"Ener volume of the pool in liters: ";
    cin>>vol;
    cout<<"Enter flow rate of the first pipe per hours: ";
    cin>>flowrate1;
    cout<<"Enter flowrate of the second pipe per hours: ";
    cin>>flowrate2;
    cout<<"Enter hours that the worker is absent: ";
    cin>>hours;
    caluculatePool(vol,flowrate1,flowrate2,hours);
    return 0;
}
void caluculatePool(int vol,int flowrate1 , int flowrate2, float hours)
{
    float totalWater=(flowrate1+flowrate2)*hours;
    if(totalWater<=vol)
    {
        int poolPer=(totalWater/vol)*100;
        int pipe1Per=(flowrate1*hours/totalWater)*100;
        int pipe2Per=(flowrate2*hours/totalWater)*100;
        cout<<"The pool is "<<poolPer<<"% full pipe1 "<<pipe1Per<<"% pipe 2 "<<"%"<<endl;
    
    }
    else if(totalWater>vol)
    {
        int overflow=totalWater-vol;
         cout<<"For "<<hours<<" hours, the pool overflows with "<<overflow<<" liters";
}
    }
   