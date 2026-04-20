#include <iostream>
using namespace std;

float calculateSalary(float base, int score, int experience);

int main() {
    float baseSalary;
    int perfScore, yearsExp;

    cout << "Enter Base Salary: ";
    cin >> baseSalary;
    cout << "Enter Performance Score: ";
    cin >> perfScore;
    cout << "Enter Years of Experience: ";
    cin >> yearsExp;

    float finalSalary = calculateSalary(baseSalary, perfScore, yearsExp);
    cout << "Final Salary: " << finalSalary << endl;

    return 0;
}

float calculateSalary(float base, int score, int experience) {
    float bonusPercentage = 0.0;

    if (score >= 90) {
        bonusPercentage = 0.20;
    } else if (score >= 75 && score <= 89) {
        bonusPercentage = 0.10;
    } else {
        bonusPercentage = 0.05;
    }

    if (experience >= 5) {
        bonusPercentage += 0.05;
    }

    float totalBonus = base * bonusPercentage;
    return base + totalBonus;
}
