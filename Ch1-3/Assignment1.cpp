#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
int total_hours = 0, hours;
double pay_rate, total_income, total_saving_bonds;
const double tax_rate = 0.14, clothes_accessories_rate = 0.10, school_supply_rate = 0.01, savings_bond_rate = 0.25;

cout << " Please Enter your pay rate for each hour : $";
cin >> pay_rate;

cout << " Please Enter the number of hours you worked in week #1 : ";
cin >> hours;
total_hours += hours;

cout << " Please Enter the number of hours you worked in week #2 : ";
cin >> hours;
total_hours += hours;

cout << " Please Enter the number of hours you worked in week #3 : ";
cin >> hours;
total_hours += hours;

cout << " Please Enter the number of hours you worked in week #4 : ";
cin >> hours;
total_hours += hours;

cout << " Please Enter the number of hours you worked in week #5 : ";
cin >> hours;
total_hours += hours;

total_income = total_hours * pay_rate;
  
cout << " Your Total income before taxes from your summer job  :  $" << total_income << endl;
cout << " Your Total income after taxes from your summer job  : $" << total_income - (total_income * tax_rate) << endl;

total_income = total_income - (total_income * tax_rate);

cout << " Total money you spend on clothes and accessories :  $"<<(total_income * clothes_accessories_rate)<<endl;
cout << " Total money you spend to buy school supplies : $" << (total_income * school_supply_rate) << endl;
cout << " The money you spend to buy savings bonds: $"<< (total_income * savings_bond_rate) << endl;

total_saving_bonds = floor(total_income * savings_bond_rate);
cout << " The money your parents spend to buy additional savings bonds for you : $"<< (total_saving_bonds * 0.50)<< endl;

return 0;
}