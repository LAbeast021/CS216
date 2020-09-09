#include <iostream>

using namespace std;

int main()
{
int totalHours=0,hours;
double price,total=0;
//reading hours for week 1
cout<<"enter number of hours worked for week-1 : ";
cin>>hours;
//adding to total hours
totalHours+=hours;
//reading hours for week 2
cout<<"enter number of hours worked for week-2 : ";
cin>>hours;
//adding to total hours
totalHours+=hours;
//reading hours for week 3
cout<<"enter number of hours worked for week-3 : ";
cin>>hours;
//adding to total hours
totalHours+=hours;
//reading hours for week 4
cout<<"enter number of hours worked for week-4 : ";
cin>>hours;
totalHours+=hours;
//reading hours for week 5
cout<<"enter number of hours worked for week-5 : ";
cin>>hours;
totalHours+=hours;
//reading price per hous
cout<<"Enter price per hour: ";
cin>>price;
//finding total income
total=totalHours*price;
  
//printing total income
cout<<"Total income before taxes : "<<total<<endl;
//printing income afte taxes
cout<<"Total income after taxes : "<<total-(total*0.14)<<endl;
//print spends on cloth accessories
cout<<"Total money spent on clothes accessories and buy school supplies : "<<(total*0.10)<<endl;
cout<<"Total money spent to buy school supplies : "<<(total*0.01)<<endl;
cout<<"the money you spend to buy savings bonds: "<<total*0.25<<endl;
cout<<"The money your parents spend to buy additional savings bonds for you : "<<0.50<<"$"<<endl;
  
  
  
  

return 0;
}