//  Kiarash Hesampour CS216
// This program will take an input file and will count how many of each letter in alphabet is in the text

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cctype>
using namespace std;


int recursiveMultiply(int, int);

int main(){
   int x, y, res;
   cout << "Please enter the first number  : ";
   cin >> x;
   if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Input error, Please Try again." << endl;
    }

   cout << "Please enter the second number  : ";
   cin >> y;
   if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Input error, Please Try again." << endl;
    }

   res =  recursiveMultiply(x,y);
   cout << x << " times " << y << " : " << res << endl ;
   return 0;
}
int recursiveMultiply(int x,int y){
   if(x >= 1){
       x -= 1;
       return y + recursiveMultiply(x,y);
   }
   else{ 
       return 0;
   }   
}