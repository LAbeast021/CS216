//  Kiarash Hesampour CS216
// this is  the recursive version of the sample function using a driver program 

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cctype>
using namespace std;

void sign(int);

int main(){
    int n;
    cout << "Please Enter a Value for ' n ' : " ;
    cin >> n;
    if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Input error, Please Try again." << endl;
    }

    sign(n);
}

void sign(int n){
    if(n <= 0){
        return;
    }
    else {
        n -= 1;
        cout << "No Parking\n";
        sign(n);
    }    
}
