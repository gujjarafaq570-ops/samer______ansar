#include<iostream>
using namespace std;
void mul(int number1);
int main()
{
    int number1;
    cout<<"Enter the number: ";
    cin>>number1;
    mul( number1);
    return 0;
}
void mul(int number1)
{
   cout<<"Multiplication with number : "<<number1 *5; 
}