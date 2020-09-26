#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

class inventory{
    private:
        int itemNumber; 
        int quantity; 
        double cost; 
        double totalCost;
    public:
        inventory(){
            itemNumber = 0;
            quantity = 0;
            cost = 0;
            totalCost = 0;
        }
    inventory(int item_number,int quantity,double cost){
        setItemNumber(item_number);
        setQuantity(quantity);
        setCost(cost);
        setTotalCost();
    }
    void setItemNumber(int in){
        itemNumber = in;
    }
    void setQuantity(int q){
        quantity = q;
    }
    void setCost(double c){
        cost = c;
    }
    void setTotalCost (){
        totalCost = cost * quantity;
    }
    int getItemNumber(){
        return itemNumber;
    }
    int getQuantity(){
        return quantity;
    }
    double getCost(){
        return cost;
    }
    double getTotalCost(){
        return cost * quantity;
    }
};

int main(){
    int item_number, quantity, user_choice;
    double cost;

    cout << " Please enter the item Number :  " ;
    cin >> item_number;
    if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Input error, Please Try again." << endl;
    }
    while( item_number < 0){
        cout << "Invalid input. Please try again :  ";
        cin >> item_number;

    }
    cout << " Please enter quantity : ";
    cin >> quantity;
    if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Input error, Please Try again." << endl;
    }
    while( quantity < 0){
        cout << "Invalid input. please try again :  ";
        cin >> quantity;

    }
    cout << " Please enter the  cost of item :  ";
    cin >> cost;
    if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Input error, Please Try again." << endl;
    }
    while( cost < 0){
        cout << "Invalid input. Please try again :  ";
        cin >> cost;

    }
    inventory current_inventory(item_number,quantity,cost);
    cout 
    << " Please Enter the number of one of the options : " << endl
    << " 1 : Print the inventory ." << endl 
    << " 2 : Calculate the total cost and display it ." << endl;
    cin >> user_choice;
    while (cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Input error, Please Try again." << endl;
        cin >> user_choice ;
    }

    switch (user_choice){
        case 1:
            cout 
            << " Item Number : " << current_inventory.getItemNumber() << endl
            << " Item Quantity : " << current_inventory.getQuantity() << endl
            << " Item Cost : " << current_inventory.getCost() << endl;
            break;
       case 2:
            cout << " The total cost of the inventory is  $" << current_inventory.getTotalCost() << endl;
            break;
    
        default:
            cout << " Invalid option number ." << endl;
            break;
    } 
    return 0;
}