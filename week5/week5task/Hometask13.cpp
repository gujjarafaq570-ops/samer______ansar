#include <iostream>
using namespace std;

int main() {
    int age, toyPrice, machinePrice;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> machinePrice;
    cout << "Enter the unit price of each toy: ";
    cin >> toyPrice;

    int moneySave = 0;
    int giftPrice = 10;
    
   
    int evenBirthday = age / 2;
    for (int i = 1; i <= evenBirthday; i++)
     {
        moneySave += (giftPrice - 1); 
        giftPrice += 10; 
    }
    int toysCount = age / 2;
    int totalMoney = moneySave + (toysCount * toyPrice);
    if (totalMoney >= machinePrice)
     {
        cout << "Yes!" << endl;
        cout << totalMoney - machinePrice << endl;
    } 
    else 
    {
        cout << "No!" << endl;
        cout << machinePrice - totalMoney << endl;
    }

    return 0;
}
