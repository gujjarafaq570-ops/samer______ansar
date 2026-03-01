#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float matric, inter, ecat, aggregate;

    cout << "Enter the student's name: ";
    cin >> name;

    cout << "Enter matriculation marks (out of 1100): ";
    cin >> matric;

    cout << "Enter intermediate marks (out of 550): ";
    cin >> inter;

    cout << "Enter ECAT Marks (out of 400): ";
    cin >> ecat;
    float matricWeight = (matric / 1100) * 10;
    float interWeight = (inter / 550) * 40;
    float ecatWeight = (ecat / 400) * 50;

    aggregate = matricWeight + interWeight + ecatWeight;

    cout << "Aggregate score for " << name << " is " << aggregate << "%" << endl;

    return 0;
}
