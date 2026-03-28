#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    char letter;
    cout<<"Enter number of  customers: ";
    cin>>n;
    string name[n];
    cout<<"Enter the name of "<<n<<"customers: "<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>name[i]; 
    } 
     cout<<"Enter a letter to check: ";
     cin>>letter;
     for(int i=0;i<n;i++)
        {
         if(name[i][0]==letter)
          {
           count++;
           }
        }   
     cout<<"Total the names starting with "<<letter<<" are " <<count;
    

}