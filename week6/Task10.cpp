#include<iostream>
using namespace std;
 int main()
 {
  string word,a,b;
  cout<<"Enter a string: ";
  getline(cin,word);
  for(int i=0;i<=word.length();i++) 
  {
     if(word[i]=='a')
      {
         word[i]='b';
      }   
  
     else if(word[i]=='p')
    {
      word[i]='q';
    }
   else if (word[i]=='z')
    {
      word[i]='a';
    }
  }
   cout<<"Reserved String: "<<word;
 }