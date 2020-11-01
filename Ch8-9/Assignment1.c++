//  Kiarash Hesampour CS216 

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

struct drinks{
    string drink_name;
    int drink_quantity;
    float drink_price;
};
class vendingMachine{
private:
    drinks options[5] = { {"Cola", 0, 1.00},{"Root Bear", 20, 1.00},{"Orange Soda", 20, 1.00},{"Grape Soda", 20, 1.50},{"Bottled Water", 20, 1.50} };
    float total_amount = 0;

    float inputMoney(int i){
        float money;
        cout << "How much money has been inserted to the machine ? : $";
        cin >> money;
        if(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Input error, Please Try again." << endl;
        }

    while(!(money >= options[i].drink_price) ){
        if (money < 0) {
            cout << "Invalid Input please enter $"<< fixed << setprecision(2) << options[i].drink_price  << " $"; 
        }
        else {
            cout << "entered Amount is not enough , please enter $"<< fixed << setprecision(2) << options[i].drink_price << " $";
        }
        cin >> money;
    }
    return money;

}
void dailyReport(){
    cout << "\n Daily Report : " << endl;
    for(int i = 0; i < 5; i++)
        cout << options[i].drink_name<<"\t: "<< options[i].drink_quantity << endl;
        cout << "Total amount : $"<< fixed << setprecision(2) << total_amount << endl;
    }

    public:
        void displayChoices(){
            cout << "\nPlease enter the number of any of the options you want : " << endl;
            for(int i = 0; i < 5; i++){
                cout << i+1 << ": "<< options[i].drink_name<< ": $" << fixed << setprecision(2) << options[i].drink_price << "\t" <<  options[i].drink_quantity << " Available ." << endl;
            }
                cout << "6: "<< "Quit" << endl;
        }

        void buyDrink(int i){

            if(options[i].drink_quantity < 1){
                cout << "Sorry. item "<< options[i].drink_name << " is out of stock " << endl;
                return;
            }
            char user_choice;
            float money = inputMoney(i);

            cout << "Here is your "<< options[i].drink_name << endl;
            cout << "Do you want to make another Purchase ? enter 'Y' for yes and 'N' for no : ";
            cin >> user_choice;

            if(user_choice == 'Y' || user_choice == 'y'){
                money = money - options[i].drink_price;
                if (money == 0) money = inputMoney(i);
                total_amount += options[i].drink_price;
                options[i].drink_quantity = options[i].drink_quantity - 1;
            }
            else{
                    if(user_choice == 'N' || user_choice == 'n')
                        cout << " Thank you for shopping from us , Here is your "<< options[i].drink_name <<", and your change of $"<< fixed << setprecision(2) << (money - options[i].drink_price);
                        total_amount += options[i].drink_price;
                        options[i].drink_quantity = options[i].drink_quantity - 1;
                }    
        }

        ~vendingMachine(){
            dailyReport();
        }
};
int main(){
    int option;
    vendingMachine vending_machine;
    char rep = 'y';

    while(rep == 'y'){
        vending_machine.displayChoices();
        cin >> option;
        if(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Input error, Please Try again." << endl;
        }
        while(option > 6 || option < 1){
            cout << "Please enter a valid choice(1-6): ";
            cin >> option;
        }
        if(option == 6){
            rep = 'n';
            cout << "Thank You, Good Bye ;)" << endl;
        }
        else {
            vending_machine.buyDrink(option - 1);
        }
    }
    return 0;
}