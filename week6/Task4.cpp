#include<iostream>
using namespace std;
 int main()
{
    int number[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter number: ";
        cin>>number[i];
    }
    cout<<"Thd 1st element is:"<<number[0]<<endl;
    cout<<"The last element is:"<<number[4]<<endl;
}
