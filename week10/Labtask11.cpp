#include<iostream>
using namespace std;
bool isSymetrical(int number);
int main()
{
    int number,digit;
    cout<<"Enter the three digit number: ";
    cin>>number;
    isSymetrical(number);
    return 0;
}
bool isSymetrical(int number)
{ 
   int firstdigit=number%10;
   int lastdidit=number/10;
   if(firstdigit==lastdidit)
   {
    cout<<"This number is symmetrical.";
   }
   else{
    cout<<"This number is not symmetrical.";
   }

}