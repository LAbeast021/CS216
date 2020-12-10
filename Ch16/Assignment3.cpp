//  Kiarash Hesampour CS216
// 

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cctype>
using namespace std;

template <typename T>
T const& Max (T const& a, T const& b);
template <typename T>
T const& Min (T const& a, T const& b);

int main() {

  cout << "Max(27, 35) is: " << Max(27,35) << endl;
  cout << "Max(-9, -38) is: " << Max(-9,-38) << endl;
  cout << "Max(17.64, 28.19) is: " << Max(17.64,28.19) << endl;
  cout << "Max(california, California) is: " << Max("california","California") << endl;
  cout << endl;

  cout << "Min(27, 35) is: " << Min(27,35) << endl;
  cout << "Min(-9, -38) is: " << Min(-9,-38) << endl;
  cout << "Min(17.64, 28.19) is: " << Min(17.64,28.19) << endl;
  cout << "Min(california, California) is: " << Min("california","California") << endl;
  cout << endl;

  return 0;
}

template <typename T>
T const& Max (T const& a, T const& b) {
  return a < b ? b:a;
}

template <typename T>
T const& Min (T const& a, T const& b) {
  return a > b ? b:a;
}