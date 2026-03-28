#include<iostream>
using namespace std;
int main()
{
    int arr1[2];
    int n;
    cout<<"Enter the number of element forthe first array: ";
    cin>>n;
    cout <<"Enter the  "<<n<<" elements for the first  array,per one line: "<<endl;
    cin>>arr1[0]>>arr1[1];
    int arr2[n];
    cout<<"Enter the number of element for the second array: ";
    cin>>n;
    cout<<"Enter "<<n<< " elements for the second array ,one per line: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    
    cout<<"Resulting array: ";
    cout<<arr1[0];
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<arr1[1]<<" ";
}
