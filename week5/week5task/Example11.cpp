#include<iostream>
using namespace std;
main()
{
    int i,j,rows;
    cout<<"Enter no of rows";
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        cout<<"*";
        cout<<"\n";
    }
}   