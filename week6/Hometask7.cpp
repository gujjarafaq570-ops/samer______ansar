#include<iostream>
#include<string>
using namespace std;
int main()
{
   int num,n[100],quality[100],t;
float product[100];
string name[100];
    cout<<"enter number of products: "<<endl;
    cin>>num;
    cout<<"enter names of products: "<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>name[i];
    }
cout<<"enter prices: "<<endl;
for(int i=0;i<num;i++)
{
    cin>>product[i];
}
cout<<"enter quantity: "<<endl;
for(int i=0;i<num;i++)
{
cin>>quality[i];
} 
for(int i=0;i<num;i++)
{
float t=product[i]*quality[i];
cout<<name[i]<<": $"<<product[i]<<","<<quality[i]<<"in stock, total: $"<<t<<endl;
}
    return 0;
}