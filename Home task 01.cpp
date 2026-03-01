#include <iostream>
using namespace std;

int main()
 {
         int n, sum;
          cout << "Enter number of sides of the polygon: ";
          cin >> n;
          sum = (n - 2) * 180;
          cout << "The total sum of internal angles of a " << n << "-sided polygon is: " << sum << " degrees";
   }