//  Kiarash Hesampour CS216
// This Program will accept an integer and if the number is a perfect square it will return the result if not it will let the 
        // user know .

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

int squareRootCalculator(int);

int main() {
  int entered_number, entered_number_sqrt;
  cout << " Please enter the number you want to know the square root of :  ";

  cin >> entered_number;
  if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Input error, Please Try again." << endl;
    }
  
  try {
    entered_number_sqrt = squareRootCalculator(entered_number);
    cout << " The square root of " << entered_number << " is " << entered_number_sqrt << endl;
  } 
  catch (const char * exeption_message) {
    cout << exeption_message << " ( Entered number : " << entered_number << " ) "  << endl;
  }
  return 0;
}

int squareRootCalculator(int entered_number){
  if (entered_number <= 0 || sqrt(entered_number) != static_cast<int>(sqrt(entered_number))) {
    throw " The number you entered is not a perfect square.";
  }
  return sqrt(entered_number);
}