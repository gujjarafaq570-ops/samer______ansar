#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter no of resistance";
     cin>>n;
    double resistance[n];
    double totalresistance=0.0;
    cout<<"Enter the resistance values (in ohm) of the "<<n<<" ,one per line"<<endl;
    
        for(int i=0;i<n;i++)
        {
            cin >> resistance[i];
            totalresistance+=resistance[i];
        }
    cout<<"The total resistance of the series circuit is"<< totalresistance;

}    