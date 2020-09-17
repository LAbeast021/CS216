#include<iostream>

using namespace std;

//Constants to store discount percent
const float discount_10=0.1;
const float discount_20=0.2;
const float discount_30=0.3;
const float additional_discount=0.05;

int main()
{

//Variables to store user input
float rent,salesTax;
int rooms,days;

//Variables to store processing items
float roomCost=0;
float totalDiscount=0;
float totalCost=0;
float tax=0;
float finalBill=0;

//User input
cout<<"Enter the cost of renting one room: $";
cin>>rent;

cout<<"Enter the number of rooms booked: ";
cin>>rooms;

cout<<"Enter number of days the rooms are booked: ";
cin>>days;

cout<<"Enter sales tax(%): ";
cin>>salesTax;

//Finding out the discount as per number of rooms booked.
if(rooms>=30)
   totalDiscount = discount_30;

else if(rooms>=20)
   totalDiscount = discount_20;

else if(rooms>=10)
   totalDiscount = discount_10;

else
   totalDiscount=0;

//Finding out if additional discount is applied or not.
if(days>=3)
totalDiscount += additional_discount;

//Processing

//Calculating the cost per single room
roomCost = rent - rent*totalDiscount;

//Total cost for all rooms
totalCost = roomCost*rooms*days;

//Finding out the tax
tax = totalCost * (salesTax/100);

//Final bill
finalBill=totalCost+tax;

//displaying the output
cout<<endl<<endl<<endl;

cout<<"The cost of renting one room: $"<<roomCost;
cout<<"\nThe discount on each room: "<<totalDiscount<<"%";
cout<<"\nNo. of rooms booked: "<<rooms;
cout<<"\nNo. of days the rooms booked: "<<days;

cout<<"\n\nTotal cost of the rooms: $"<<totalCost;
cout<<"\nSales Tax : $"<<tax;
cout<<"\nTotal Billing Amount : $"<<finalBill;

return 0;
}