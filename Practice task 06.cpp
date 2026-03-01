#include <iostream>
using namespace std;

int main() {
    int n, w, h, walls_painted;
    cout << "Enter paint area: ";
    cin >> n;
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter height: ";
    cin >> h;
    walls_painted = n / (w * h);
    cout << "Walls painted = " << walls_painted;
}
