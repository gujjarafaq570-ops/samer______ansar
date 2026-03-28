#include<iostream>
using namespace std;
 int main()
 {
    string word;
    char letter;
    cout<<"Enter the word";
    cin>>word;
    cout<<"Enter the character";
    cin>>letter;
    bool isfound=false;
    for(int i=0;word[i]!='\0';i++)
    {
       if(word[i]==letter)   
      {
         isfound=true;
       }
    }
    
     if (isfound)
     {
         cout<<"Present";
     } 
     else
      {
        cout<<"Not Present";
      }
  
    

 }