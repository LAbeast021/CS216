//  Kiarash Hesampour CS216 
// this program will accept single digits as string and then goes through each integer and add them all together and display 
//      it alongside with the highest and lowest number 

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main(){

    string singleDigits;
    char currentChar;
    int currentDigit, total = 0, highestDigit, lowestDigit;

    cout << " Please Enter a string of single Digits with nothin seperating them  " << endl;
    cin >> singleDigits;

    if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Input error, Please Try again." << endl;
    }

    else {

        highestDigit = singleDigits.at(0) - '0';
        lowestDigit = singleDigits.at(0) - '0';

        cout << " Digits you Entered : " ;
        for (int i = 0; i < singleDigits.length(); i++){ 
            currentChar = singleDigits.at(i); 
            currentDigit = currentChar - '0';
            cout << currentDigit << ',' ;
            total += currentDigit;

            if ( currentDigit > highestDigit) {
                highestDigit = currentDigit;
            }
            if ( currentDigit < lowestDigit) {
                lowestDigit = currentDigit;
            }

        }

        cout 
        << '.' << endl
        << "Total : " << total << endl
        << "Highest Number : " << highestDigit << endl
        << "Lowest Number : " << lowestDigit << endl;

    }

}