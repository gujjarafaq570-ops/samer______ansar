#include <iostream>
using namespace std;

int main()
{
    int choice;
    {
        cout << "---Library Menu---"<<endl;
        cout << "1. Add Books"<<endl;
        cout << "2. View Books"<<endl;
        cout << "3. Borrow Books"<<endl;
        cout << "4. View Books"<<endl;
        cout << "5. Exit"<<endl;
    
        cout << "Enter choice: ";
         cin >> choice;
         if(choice==1)
        {
            cout<<"You added a book"<<endl;
        }             
          else if(choice==2)
          {
            cout<<"You can Veiw book"<<endl;
          }
        else if(choice==3)
        {
            cout<<"You can Borrow a book"<<endl;
        }
        else if(choice==4)
        {
            cout<<"Issue Book"<<endl;
        }
        else if(choice==5)
        {
            "Exiting Library System";
        }
        else
        {
            cout<<"Invalid Choice"<<endl;
        }
    
    }    
}