#include <iostream>
using namespace std;
void EvenishOddish(int number);
int main()
{
  int number, sum = 0;
  cout << "Enter the five digits:";
  cin >> number;
  EvenishOddish(number);
  return 0;
}
void EvenishOddish(int number)
{
  int sum = 0;
  while (number > 0)
  {
    int digit = number % 10;
    sum += digit;
    number /= 10;
  }

  if (sum % 2 == 0)
  {
    cout << "The number is Oddish";
  }
  else
  {
    cout << "The number is Evenish";
  }
}