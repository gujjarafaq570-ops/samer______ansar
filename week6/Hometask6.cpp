#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;

    cout<<"Enter the number of students: ";
    cin>>n;
    string students[n];
    cout<<"Enter names of "<<n<<" students: "<<endl;
    for(int i=0;i<n;i++)
    {
        getline(cin,students[i]);
    }
    sort(students,students+n);
    cout<<"Students in alphabatecial order:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<students[i]<<endl;
    }
}
  
