#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number (1-99): ";
    cin >> num;

    return 0;
}

string Text(int n)
{
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven",
                     "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen",
                     "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
                     "Sixty", "Seventy", "Eighty", "Ninety"};

    if (n < 20)
    {
        return ones[n];
    }
    else
    {
        return tens[n / 10] + ones[n % 10];
    }
}
