#include <iostream>
using namespace std;
void pyramidVol(double length, double widht, double height, string unit);
int main()
{
    double length, widht, height;
    string unit;
    cout << "Enter the lenght,width,height(in meters): ";
    cin >> length;
    cin >> widht;
    cin >> height;
    cout << "Enter the output unit:";
    cin >> unit;
    pyramidVol(height, widht, height, unit);
    return 0;
}
void pyramidVol(double length, double widht, double height, string unit)
{
    double volume = length * widht * height;
    if (unit == "millimeters")
    {
        volume = volume * 1000000000;
    }
    else if(unit=="meters")
    {
        volume=volume*1;
    }
    else if(unit=="kilometers")
    {
        volume=volume*0.000000001;
    }
   cout<<volume<<" cubic "<<unit<<endl;

}