#include<iostream>
using namespace std;
main()
{
    int num1,num2,HCF,LCM;
    cout<<"Enter first number";
    cin>>num1;
    cout<<"Enter second number";
    cin>>num2;
    for(int i=1;i<=num1&&i<<num2; i++)
    {
        if(num1%i==0&&num2%i==0)
        HCF=i; 
    }
    cout<<"HCF of "<<num1<<"and"<<num2<<"is"<<HCF<<endl;
    LCM=num1*num2/HCF;
    cout<<"LCM of "<<num1<<"and"<<num2<<LCM<<endl;
   
}