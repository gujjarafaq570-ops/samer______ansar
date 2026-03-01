#include<iostream>
using namespace std;
main(){
    int imposter, player, chance;
    cout<<"enter imposter count:";
    cin>>imposter;
    cout<<"enter player count:";
    cin>>player;
    chance=(100*imposter)/player;
    cout<<"chance of being an imposter:"<<chance<<"%";
}
