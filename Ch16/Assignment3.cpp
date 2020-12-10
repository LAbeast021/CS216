//  Kiarash Hesampour CS216
// this program have template of functions min and max which take in two variable and return the min or max , and is tested with 
//  different type of variables and different values ,

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cctype>
using namespace std;

template < typename T >
T const& Max (T const& first_variable, T const& second_variable);
template <typename T>
T const& Min (T const& first_variable, T const& second_variable);

int main() {

  cout << "Max Function test : " << endl;
  cout 
    << "Maximum of (35, 64) is -> " << Max(35, 64) << endl
    << "Maximum of (-10, -33) is -> " << Max(-10, -33) << endl
    << "Maximum of (15.23, 22.11) is -> " << Max(15.23, 22.11) << endl
    << "Maximum of (computer, computer) is -> " << Max("computer", "computer") << endl;

  cout << " ----------------------------------------------------------------------------" << endl;   

  cout << "Min Function test : " << endl;
  cout 
    << "Minimum of (35, 64) is -> " << Min(35, 64) << endl
    << "Minimum of (-10, -33) is -> " << Min(-10, -33) << endl
    << "Minimum of (15.23, 22.11) is -> " << Min(15.23, 22.11) << endl
    << "Minimum of (computer, computer) is -> " << Min("computer", "computer") << endl;


  return 0;
}

template < typename T >
T const& Max (T const& first_variable, T const& second_variable) {
  if ( first_variable < second_variable) {
      return second_variable;
  }
  else {
      return first_variable;
  }
}

template <typename T>
T const& Min (T const& first_variable, T const& second_variable) {
  if (first_variable < second_variable) {
      return first_variable;
  }
  else {
      return second_variable;
  }
}