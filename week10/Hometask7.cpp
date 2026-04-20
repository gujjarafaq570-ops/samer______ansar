#include <iostream>
using namespace std;

float calculateBalance(float balance, int years);

int main() {
    float balance;
    int years;

    cout << "Enter Balance and years:" << endl;
    cin >> balance;
    cin >> years;

    cout << "Updated Balance: " << calculateBalance(balance, years) << endl;

    return 0;
}

float calculateBalance(float balance, int years) {
    float interestRate = 0.0;

    if (balance < 10000) {
        interestRate = 0.05;
    } else if (balance >= 10000 && balance <= 50000) {
        interestRate = 0.07;
    } else {
        interestRate = 0.10;
    }

    if (years >= 3) {
        interestRate += 0.02;
    }

    return balance + (balance * interestRate);
}
