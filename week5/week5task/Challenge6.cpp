#include <iostream>
using namespace std;

int main()
{
    int pin,choice;
    int balance=1000;
    int amount;
    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter PIN: ";
        cin >> pin;
        if(pin == 1234)
         {
            cout << "Login Successful" << endl;
         }
         else
         {
            cout<<"Wrong password"<<endl;
         }
    } 

    {
       cout<<"---ATM MENU---"<<endl;
       cout << "1 -- Check Balance" << endl;
        cout << "2 -> Deposit Money" << endl;
       cout << "3 -> Withdraw Money" << endl;
       cout << "4 -> Exit" << endl;
       cout << "Enter choice: ";
        cin >> choice;
       if(choice == 1)
     {
       cout << " Curreny Balance: " << balance << endl;
     }
     else if(choice == 2)
     {
         cout << "Enter amount to deposit: ";
         cin >> amount;
     }
         else if(choice == 3)
       {
         cout << "Enter amount: ";
         cin >> amount;
         if(amount <= balance && amount > 0)
         {
           balance = balance - amount;
           cout << "Withdraw Successful" << endl;
         }
          else
          {
         cout << "Insufficient Balance" << endl;
          }
        }     
           else if (choice==4)
          {
            cout<<"ThankYou for using ATM";
          }
         else
         {
            cout << "Invalid Choice" << endl;
         }
            
    }
    return 0;
}