#include <iostream>
using namespace std;

int main() {
    int num, digit, count = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter digit to find frequency: ";
    cin >> digit;

    while (num != 0) {
        remainder = num % 10;

        if (remainder == digit) {
            count++;
        }

        num = num / 10;
    }

    cout << "Frequency of " << digit << " = " << count << endl;

    return 0;
}
