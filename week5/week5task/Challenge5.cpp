#include<iostream>
using namespace std;
int main()
{
 int i,choice,studentage;
 string username,studentname;
 string password,coursename;
 for(i=1;i<=3;i++)
 {
   cout<<"Enter username";
   cin>>username;
   cout<<"Enter password";
   cin>>password;
  
   if(username=="admin" && password=="1234")
   {
     cout<<"Login Successful"<<endl;

    }
    else
   {
     cout<<"Wrong Login"<<endl;
    } 
  
    if(i==3&&!(username=="admin"&&password=="1234"))
    {
       cout<<"To many attempts.Program end"<<endl;

    }
      for(i=1;1<=5;i++)
     {
       cout<<endl<<"----University Management System---"<<endl;
       cout<<"1. Add Student "<<endl;
       cout<<"2. Veiw Student"<<endl;
       cout<<"3. Add Course"<<endl;
       cout<<"4. Exit"<<endl;
       cout<<"Enter Choice";
        cin>>choice;

        if(choice==1)
         {
           cout<<"Enter student name";
           cin>>studentname;
           cout<<"Enter Student age";
           cin>>studentage;
            cout<<"Student Added Sucessfully"<<endl;
          }
            else if(choice==2)
           {
              if(studentname!=" ")
              {
                 cout<<"Student name: "<<studentname<<endl;
                 cout<<"Student Age: "<<studentage<<endl;
             } 
               else
              {
               cout<<"No Student Record Found"<<endl;
              }
            }
                 else if(choice==3)
                {
                  cout<<"Course Name";
                  cin>>coursename;
                  cout<<"Course Added: "<<coursename<<endl;

                }
                  else if(choice==4)
                  {
                    cout<<"Program Exit"<<endl;
                  }
                  else{
                    cout<<"Invalid choice"<<endl;
                  }

            } 

  }
}



