#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int number1, number2;
    cout << "Enter number1: ";
    cin >> number1;
    cout << "Enter number2 :";
    cin >> number2;
    cout << "The minimum of "<<number1<<" and "<<number2<<" is "  << min(number1, number2);
    return 0;
}