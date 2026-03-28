#include<iostream>
using namespace std;
 int main()
{
  int n; 
  cout<<"Enter the number of elements: ";
  cin>>n;
  if(n<=0)
 {
   cout<<"Invalid input"<<endl;
 }
 int arr[n];
 cout<<"Enter " <<n<< "number ,one line per line: "<<endl;
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 cout<<"Number in reserve order"<<endl;
 
    for(int  i=n-1;i>=0;i--)
   {
      cout<<arr[i]; 
    }
    cout<<endl;
 
}