#include<iostream>
using namespace std;
 main()
 {
    int num1,num2,mod;
   cout<<"Enter first number";
   cin>>num1; 
   cout<<"Enter second number";
   cin>>num2;
   
   mod=num1%num2;
   int gcd=(num1,num2);
   int LCM=(num1*num2)/ gcd;
   cout<<"GCD of"<<num1<<"and"<<num2<<"is"<<gcd;
   cout<<"LCM OF"<<num1<<"and"<<num2<<"is"<<LCM;

 }