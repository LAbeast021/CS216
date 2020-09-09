#include <iostream>
#include <math.h>
#include <iomanip>
#include <sstream>

using namespace std;

int main(){

string movieTitle;
int no_of_adult_tickets,no_of_child_tickets;
double gross, distributor_pay, net_profit;
const int adult_ticket = 6 , child_ticket = 3;
const double theater_rate = 0.20;

cout << " Please enter the name of the movie : ";
getline (cin, movieTitle);

cout << " Please enter the number of Adult Tickets sold :  ";
cin >> no_of_adult_tickets;

cout << " Please enter the number of Child Tickets sold :  ";
cin >> no_of_child_tickets;

gross = (no_of_adult_tickets * adult_ticket) + (no_of_child_tickets*child_ticket);
net_profit = gross * theater_rate;
distributor_pay = gross - net_profit;

movieTitle = "\"" + movieTitle + "\"" ;
cout << fixed << showpoint << setprecision(2);

cout << "Movie Name:  " << movieTitle << endl;
cout << "Adult Tickets Sold:" << setw(4) << no_of_adult_tickets << endl;
cout << "Child Tickets Sold:" << setw(4) << no_of_child_tickets << endl;
cout << "Gross Box Office Profit: $" << gross << endl;
cout << "Amount Paid to Distributor:  _$" << distributor_pay << endl;
cout << "Net Box Office Profit: $" << net_profit << endl ;
cout << "--------------------------------------------------------------" << endl;

return 0;
}