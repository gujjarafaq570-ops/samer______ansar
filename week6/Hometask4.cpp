#include<iostream>
using namespace std;
int main()
{
    string name[5];
    cout<<"Enter the names of"<<" students: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>name[i];
    }
    cout<<"Student name: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<name[i]<<" ";
    }
}