#include<iostream>
#include<iomanip>
using namespace std;
int main(){
/**
* A string named movie Title is declared below
*/
string movieTitle;

/**
* Two integer variable named adultTix and childTix
* are declared below that stores the tickets sold for
* adults and child respectively
*/
int adultTix,childTix;

/**
* Prompting user to enter the name of the movie
*/
cout<<"Please enter the name of the movie: ";
getline(cin,movieTitle);


/**
* Prompting user to enter adult tickets sold
*/
cout<<"How many ADULT tickets sold: ";
cin>>adultTix;

/**
* Prompting user to enter child tickets sold
*/
cout<<"How many CHILD tickets sold: ";
cin>>childTix;

/**
* Three double variables are declared below
*/
double gross,distributor,net;

/**
* Calculating gross as per the 6$ per ticket for adults
* and $3 for child
*/
gross = adultTix*6 + childTix*3;

/**
* Calculating net profit i.e 20% of gross
*/
net = (20.0/100.0)*gross;
distributor = gross - net;


cout << "Movie Name: " << movieTitle << endl;
cout << "Adult Tickets Sold:" << setw(4) << adultTix << endl;
cout << "Child Tickets Sold:" << setw(4) << childTix << endl;
cout << fixed << showpoint << setprecision(2);
cout << "Gross Box Office Profit: $" << gross << endl;
cout << "Amount Paid to Distributor: $" << distributor << endl;
cout << "Net Box Office Profit: $" << net ;
cout<<endl;


return 0;
}