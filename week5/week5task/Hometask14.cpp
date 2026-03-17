#include <iostream>
using namespace std;

int main()
{
    int money;
    int year;
    cout<<"Enter money";
    cin >> money;
    cout<<"Enter year";
    cin >> year;

    int age = 18;
    int totalSpent = 0;

    for(int i=1800;i<= year;i++)
    {
        if(i % 2 == 0)
        {
            totalSpent = totalSpent + 12000;
        }
        else
        {
            totalSpent = totalSpent + (12000 + 50 * age);
        }
        age++;
    }

    if(money >= totalSpent)
    {
        cout << "Yes! He will live a carefree life and will have "
             << money - totalSpent << " dollars left." << endl;
    }
    else
    {
        cout << "He will need " << totalSpent - money << " dollars to survive." << endl;
    }

    return 0;
}