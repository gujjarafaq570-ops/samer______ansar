#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    double d = (b * b) - (4 * a * c);

    if (d > 0) {
        double r1 = (-b + sqrt(d)) / (2 * a);
        double r2 = (-b - sqrt(d)) / (2 * a);

        cout << "Two real roots: " << r1 << " and " << r2 << endl;
    }
    else if (d == 0) {
        double r = -b / (2 * a);
        cout << "One real root: " << r << endl;
    }
    else {
        cout << "No real roots (complex roots exist)" << endl;
    }

    return 0;
}