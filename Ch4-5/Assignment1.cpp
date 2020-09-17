#include <iostream>
using namespace std;

int main(){

// __ named constants to store discounts Percentage  __ //
const float discount_for_10_rooms = 0.10, discount_for_20_rooms = 0.20, discount_for_30_rooms = 0.30, additional_discount = 0.05;

// __ named Variables to store user inputs __ //
float rent , sales_tax;
int number_of_rooms , number_of_days;

// __ names Variables to keep track of cost __ //
float room_cost = 0, total_discount = 0, total_cost = 0, tax = 0, final_bill = 0;

// __ Getting User inputs __ //
cout << " Please Enter the price for renting one room : $";
cin >> rent;

cout << " Please Enter the number of Rooms booked : ";
cin >> number_of_rooms;

cout << " Please Enter the  number of days you booked the room(s) : ";
cin >> number_of_days;

cout << " Please Enter the sales tax(%) : ";
cin >> sales_tax;

// __ Determining the Discount amount for number of rooms booked __ . //
if(number_of_rooms >= 30){
   total_discount = discount_for_30_rooms;
}
else if(number_of_rooms >= 20){
   total_discount = discount_for_20_rooms;
}
else if(number_of_rooms >= 10){
   total_discount = discount_for_10_rooms;
}
else{
   total_discount = 0;
}

// __ Determining if extra Discount applies or not . __ //
if(number_of_days >= 3){
    total_discount += additional_discount;
}

// __ Calculating the cost per single room and including discount __ // 
room_cost = rent - ( rent * total_discount);

// __ Calculating Total cost for all rooms based on the cost for one room and number of days and rooms __ //
total_cost = room_cost * number_of_rooms * number_of_days;

// __ Calculating the tax amount __ //
tax = total_cost * (sales_tax/100);

// __ Calculating the Final bill __ //
final_bill = total_cost + tax;

// __ displaying the output __ //
cout << "-----------------------------------------------------------------" << endl;

cout << "The Price for renting one room per night : $" << room_cost << endl;
cout << "The discount applied on each room : " << total_discount * 100 << "%" << endl;
cout << "# of rooms booked : "<< number_of_rooms << endl;
cout << "# of days rooms are booked for : " << number_of_days << endl;
cout << "Total Price for all rooms : $" << total_cost << endl;
cout << "Sales Tax amount : $" << tax << endl;
cout << "Total Amount due : $" << final_bill << endl;

cout << "-----------------------------------------------------------------" << endl;

return 0;
}