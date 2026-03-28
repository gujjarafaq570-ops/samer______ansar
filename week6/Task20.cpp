#include <iostream>
using namespace std;

int main() 
{
    int coins[4];
    float totalDue;

    cout << "Enter the number of quarters, dimes, nickels, and pennies: ";
    for (int i = 0; i < 4; i++) {
        cin >> coins[i];
    }

    cout << "Enter the total amount due: ";
    cin >> totalDue;
    float totalAmount = 0.0;
    totalAmount += coins[0] * 0.25; 
    totalAmount += coins[1] * 0.10; 
    totalAmount += coins[2] * 0.05;
    totalAmount += coins[3] * 0.01; 
    if (totalAmount >= totalDue) 
    {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}