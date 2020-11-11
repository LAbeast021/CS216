//  Kiarash Hesampour CS216

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cctype>
using namespace std;

void sign(int);

void main(){
    int num;
    //Inputting data
    cout << "Enter number:";
    cin >> num;
    //Function call
    sign(num);
}

//Function definition
void sign(int n){
    if(n > 0){
        cout << "No Parking\n";
        sign(n-1);
    }
}//end main
