#include <iostream>
#include <cmath>
using namespace std;
bool isStrong (int num);
int main(){
    int num;
    cout<< " Enter the number: ";
    cin>>num;
    isStrong (num);
    return 0;

}
bool isStrong (int num){
    int sum = 0;
    int temp = num;
    while (temp > 0){
        int digit = temp % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++){
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }
    if (sum == num){
        cout << num << " is a strong number." << endl;
        return true;
    } else {
        cout << num << " is not a strong number." << endl;
        return false;
    }
}