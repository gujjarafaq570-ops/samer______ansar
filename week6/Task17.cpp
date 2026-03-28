#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the number of chords: ";
   cin>>n;
   string  arr[n];
   cout<<"Enter "<<n<< "chords ,one per line: "<<endl;
   for(int i=0;i<n;i++)
   {
    cin >> arr[i];
   } 
   cout<<"Jazzified chords: ";
   for(int i=0;i<n;i++)
   {
      if(arr[i].back()!='7')
      {
         arr[i]+='7';
      }
      cout<<arr[i]<<" ";
   }
   

   
   
}