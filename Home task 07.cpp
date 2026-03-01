#include <iostream>
using namespace std;

int main()
{
    string movie;

    cout << "enter the movie name:";
    cin >> movie;

    int adult_ticket, child_ticket,  charity, total, donation, remaning;
    int adult_ticket_sold,child_ticket_sold;
    cout << "enter adult ticket price:$";
    cin >> adult_ticket;

    cout << "enter child ticket price";
    cin >> child_ticket;

    cout << "enter the number of adult tickets sold:";
    cin >> adult_ticket_sold;

    cout << "enter the child tickets sold:";
    cin >> child_ticket_sold;

    cout << "enter the percentage of amount to be donated to charity:";
    cin >> charity;

    cout << "----------------------------------------------";

    cout << "movie:" << movie;

    total = (adult_ticket *adult_ticket_sold ) + (child_ticket *child_ticket_sold );
    cout << "total amount enerted from ticket sales:$" << total;

    donation = (total * charity) / 100;
    cout << "donation to charity:$" << donation;

    remaning = total - donation;
    cout << "remining amount after donation:$" << remaning;


}