#include<iostream>
using namespace std;
int main()
{
    string n;
    string word;
    cout<<"Enter a string: ";
    getline(cin,word);
    for(int i=0;i<word.length();i++)
    {
      if( word[i]!='a'&& word[i]!='e'&& word[i]!='i'
        && word[i]!='o'&& word[i]!= 'u'&& word[i]!='A'
        &&word[i]!='E'&& word[i]!='I' && word[i]!='O'
        && word[i]!= 'U')
        {
             n+=word[i];
        }
    }
       cout<<"Output without vowels : "<<n<<endl;
}
