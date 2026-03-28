#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<",number per one line"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    
    }
    cout<<" The Largest number number is "<<largest;
}