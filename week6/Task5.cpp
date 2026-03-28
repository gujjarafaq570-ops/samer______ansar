#include<iostream>
using namespace std;
 int main()
{
   int n;
   cout<<"Enter the number: ";
   cin>>n;
   int arrayNumber[n];
   for(int i=0;i<n;i++)
    {
      cout<<"Enter the number: ";
      cin>>arrayNumber[i];
    }

   {
     cout<<" The numbers are:  "<<endl;
      for(int i=0;i<n;i++)
     {
        cout<<arrayNumber[i]<<" ";
     }
   }
}