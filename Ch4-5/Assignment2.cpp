#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main(){
    // __ variables to hold the information about each Employee __ //
   string last_name, first_name;
   double salary, Increase_rate, new_salary;

    //  __ creating input and output file reader __ //
   ifstream inFile;
   ofstream outFile;

    // __ Opening the input file __ // 
   inFile.open("employeeSalary.txt");

    //  __ Error Checking __ //
   if(!inFile.is_open()){
        cout << " An error occurd while opening the input file  . " << endl;
        return 1;
    };

    // __ opening the output file __ // 
   outFile.open("employeeOutput.txt");

   //  __ Error Checking __ //
   if(!outFile.is_open()){
        cout << " An error occurd while opening the output file  . " << endl;
        return 1;
    };
    
    //  __ Format the output of decimal numbers to two decimal places __ // 
   outFile << setprecision(2) << showpoint << fixed;

    // __ Going Through the input file and calculating the new salary the importing the information to output file and also displaying it __ //
   while (!inFile.fail() && !inFile.eof()) {
       inFile >> last_name >> first_name >> salary >> Increase_rate ;
       Increase_rate = Increase_rate / 100;
       new_salary = salary + (salary * Increase_rate) ;
       outFile << last_name << " " << first_name << " " << new_salary << endl ;
       cout << last_name << " " << first_name << " " << new_salary << endl ;
    }

    // __ Closing both input and output file __ // 
   inFile.close();
   outFile.close();

   return 0;
}