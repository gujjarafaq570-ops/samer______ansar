#include<iostream>
using namespace std;
int main()
{
     int choice;
     cout<<"1.Say Hello"<<endl;
     cout<<"2.Say Goodbye"<<endl;
     cout<<"3.exit"<<endl;
     cout<<"Enter your choice ";
     cin>>choice;
     if(choice==1)
     {
        cout<<"Hello! Welcome to the program"<<endl;
    
     }
     else if(choice==2)
     {
        cout<<"Goodbye!Have a nice day"<<endl;
     }
     else if(choice==3)
     {
        cout<<"Terminates the program"<<endl;
        
     }
     else 
     {
       cout<<"Invalid choice"<<endl;
     }
}
