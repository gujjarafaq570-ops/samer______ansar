#include <iostream>
using namespace std;
void checkalphabet(char alphabet);
int main()
{
    char alphabet ;
    cout<<"Enter the alphabet(A/a): ";
    cin>>alphabet;
    checkalphabet(alphabet);
    return 0;
}
void checkalphabet(char alphabet)
{
    if(alphabet=='A')
    {
        cout<<"Your entered Capital letter ";
    }
    else
    {
      cout<<"You entered small letter ";
    }
}
