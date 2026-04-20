#include <iostream>
#include <math.h>
using namespace std;

int main()
 {
    float a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    float d = (b * b) - (4 * a * c);

    if (d > 0) {
        float r1 = (-b + sqrt(d)) / (2 * a);
        float r2 = (-b - sqrt(d)) / (2 * a);

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