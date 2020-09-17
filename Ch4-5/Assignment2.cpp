#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main(){

   string last_name, first_name;
   double salary, Increase_rate, new_salary;

   ifstream inFile;
   ofstream outFile;

   inFile.open("employeeSalary.txt");
   if(!inFile.is_open()){
        cout << " An error occurd while opening the input file  . " << endl;
        return 1;
    };

   outFile.open("employeeOutput.txt");
   if(!outFile.is_open()){
        cout << " An error occurd while opening the output file  . " << endl;
        return 1;
    };

   outFile << setprecision(2) << showpoint << fixed;
   while (!inFile.fail() && !inFile.eof()) {
       inFile >> last_name >> first_name >> salary >> Increase_rate ;
       Increase_rate = Increase_rate / 100;
       new_salary = salary + (salary * Increase_rate) ;
       outFile << last_name << " " << first_name << " " << new_salary << endl ;
       cout << last_name << " " << first_name << " " << new_salary << endl ;
    }

   inFile.close();
   outFile.close();

   return 0;
}