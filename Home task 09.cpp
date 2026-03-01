#include <iostream>
using namespace std;

int main() 
{
int num,sum;
cout<<"enter 4-digit no";
cin>> num;
sum=(num/1000)+(num/100%10)+(num/10%10)+(num%10);
cout<<"sum of the number is :"<<sum;
}