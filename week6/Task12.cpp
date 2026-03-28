#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers, one per line: "<<endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << "Already entered"<<endl;
                break;
            }
        }
    }

    return 0;
}