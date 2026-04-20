#include <iostream>
using namespace std;
void projectTimeCal(int needHours, int days, int workers);
int main()
{
    int needHours, days, workers;
     cout<<"Enter neede hours: ";
    cin >> needHours;
    cout<<"Enter number of days of firm: ";
    cin >> days;
    cout<<"Enter number of workers: ";
    cin >> workers;
    projectTimeCal(needHours, days, workers);

    return 0;
}

void projectTimeCal(int needHours, int days, int workers)
{
    double workingDays = days * 0.90;
    double hoursPerDay = (8 + 2) * workers;
    int availableHours = (workingDays * hoursPerDay);

    int diff = availableHours - needHours;

    if (diff >= 0)
    {
        cout << "Yes!" << diff << " hours left";
    }
    else
    {
        cout << "Not enough time!" << diff << " hours needed ";
    }
}
