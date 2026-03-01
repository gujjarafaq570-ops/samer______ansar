#include <iostream>
using namespace std;

int main() 
{
    int weight, cost, area;
    int pricePerPound, pricePerSqFt;

    cout << "Enter the weight of the fertilizer bag in pounds ";
    cin >> weight;

    cout << "Enter the cost of the bag: ";
    cin >> cost;

    cout << "Enter the area in square feet that the bag can cover: ";
    cin >> area;
    pricePerPound = cost / weight;
    pricePerSqFt = cost / area;
    cout << "cost of fertilizer per pound" << pricePerPound ;
    cout << "Cost of fertilizing per square foot" << pricePerSqFt ;

}