#include<iostream>
using namespace std;
int main()
{
   int choice;
   cout<<"---Resturant Managemant System"<<endl;
   cout<<"1.VeiwFood Menu"<<endl;
   cout<<"2.Place Order"<<endl;
   cout<<"3.Veiw Order Status "<<endl;
   cout<<"4.Genrate Bill"<<endl;
   cout<<"5.Contact Staff"<<endl;
   cout<<"6.Exit"<<endl;
   cout<<"Enter your choice (1-6) ";
   cin>>choice;
   if(choice==1)
   {
    cout<<"You selected: Food Menu"<<endl;

   }
   else if(choice==2)
   {
    cout<<"You Selected: Place Order"<<endl;
   }
    else if(choice==3)
    {
        cout<<" You selscted:Veiw order Status"<<endl;
    } 
    else if(choice==4)
    {
        cout<<"You Selected: Genrate Bill"<<endl;
    }
    else if(choice==5)
    {
        cout<<"You Selected: Contact Staff"<<endl;
    }
    else if(choice==6)
    {
        cout<<"You Selected: Existing Resturant MAnagement System.Thank you!"<<endl;
    }
}