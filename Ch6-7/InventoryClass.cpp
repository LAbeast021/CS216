#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

class inventory
{
private:
int itemNumber; //--an int that holds the items number
int quantity; // -- an int that holds the quantity of the item on hand
double cost; //-- a double that holds the wholesale per-unit cost of the item
double totalCost;
public:
inventory()
{
itemNumber = 0;
quantity = 0;
cost = 0.0;
totalCost= 0.0;
}
inventory(int in,int q,double c)
{
setItemNumber(in);
setQuantity(q);
setCost(c);
setTotalCost();
}
void setItemNumber(int in)
{
itemNumber = in;
}
void setQuantity(int q)
{
quantity = q;
}
void setCost(double c)
{
cost = c;
}
void setTotalCost()
{
totalCost = cost*quantity;
}
int getItemNumber() //--returns the value in ItemNumber
{
return itemNumber;
}
int getQuantity() // - returns the value in quantity
{
return quantity;
}
double getCost() //-- returns the value in cost
{
return cost;
}
double getTotalCost()//-- computes and returns the totalCost
{
return cost*quantity;
}
};
int main()
{
int itemNumber;
int quantity;
double cost;
cout << "enter item Number ";
cin >> itemNumber;
cout << endl;
while(itemNumber<=0)
{
cout << "Invalid input.enter item Number ";
cin >> itemNumber;
cout << endl;
}
cout << "enter quantity ";
cin >> quantity;
cout << endl;
while(quantity<=0)
{
cout << "Invalid input.enter quantity ";
cin >> quantity;
cout << endl;
}
cout << "enter cost of item ";
cin >> cost;
cout << endl;
while(cost<=0)
{
cout << "Invalid input.enter cost of item ";
cin >> cost;
cout << endl;
}
inventory inv1(itemNumber,quantity,cost);
cout << "Inventory total cost given by " << inv1.getTotalCost() << endl;
return 0;
}