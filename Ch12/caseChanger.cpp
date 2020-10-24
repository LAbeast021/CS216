//  Kiarash Hesampour CS216 
//  This program will take in a string with any case and will do three things , first swith upper to lower and lower to upper,
//     second all charecters to upper , and finally all characters to lower
#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

string fllip(string);
string upper(string);
string lower(string);

int main(){
    string enteredString, fllipedString, upperString, lowerString;

    cout << " Please Enter a String : " ;
    getline(cin, enteredString);
    if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Input error, Please Try again." << endl;
    }
    else {

    fllipedString = fllip(enteredString);
    upperString = upper(enteredString);
    lowerString = lower(enteredString);

    cout 
    << " You Entered string : " << enteredString << endl
    << " The string after fllip function (fllip lower case to upper and upper case to lower ) -> " << fllipedString << endl
    << " The string after upper function ( change all the characters in the string to upper case ) -> " << upperString << endl
    << " The string after lower function (change all the characters in the string to lower case) -> " << lowerString << endl;

    }
}

string fllip(string enteredString) {
    string fllipedString =  enteredString;
    for (int i = 0 ; i < enteredString.length() ; i++){
        if (isupper(enteredString.at(i))){
            fllipedString.at(i) = tolower(enteredString.at(i));
        }
        else if (islower(enteredString.at(i))){
            fllipedString.at(i) = toupper(enteredString.at(i));
        }
    }
    return fllipedString;
    
}

string upper(string enteredString) {
    string upperString = enteredString;
    for (int i = 0 ; i < enteredString.length() ; i++){
        upperString.at(i) = toupper(enteredString.at(i));
    }
    return upperString;
}

string lower(string enteredString) {
    string lowerString = enteredString;
    for (int i = 0 ; i < enteredString.length() ; i++){
        lowerString.at(i) = tolower(enteredString.at(i));
    }
    return lowerString;
}

