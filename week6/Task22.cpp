#include<iostream>
using namespace std;
int main()
{
    int password=1234;
    string username="admin";
    string name;
    string coursename,courselist;
    int age;
    bool login=false;
    int choice;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter username: ";
        cin>>username;
        cout<<"Enter Password: ";
        cin>>password;
      if(username=="admin"&&password==1234)
      {
        bool login =true;
         cout<<"Login Sucessful"<<endl;
         break;
      }
    }
    cout<<" ----University Management System----"<<endl;
    cout<<" 1. Add Student " <<endl;
    cout<<" 2. View Student "<<endl;
    cout<<" 3. Add Course "  <<endl;
    cout<<" 4. Veiw course "<<endl;
    cout<<" 5. Exit"<<endl;
    cout<<"Enter your Choice : ";
    cin>> choice;
    if (choice==1)
    {
        for(int i=0;i<3;i++)
        {
             cout<<"Enter your Name: ";
        cin>>name;
        cout<<"Enter user age: ";
        cin>>age;
        cout<<"Student Added Sucesssfully ";
        break ;
        }
       
    }
    else if(choice==2)
    {
        
        
           cout<<"Student 1: "<<name;
           cout<<" Age: "<<age;
           cout<<"Student 2: "<<age;
    }
    else if(choice==3)
    {
        for(int i=0;i<3; i++)
        {
            cout<<"Enter Course Name: ";
            cin>>coursename;
        }
    }
    else if(choice==4)
    {
        for(int i=0;i<3;i++)
        {
            cout<<"Course List: ";
            cin>>courselist;
        }
    }
    else if (choice!=5)
    {
        cout<<"Program end  ";
    }
      
}