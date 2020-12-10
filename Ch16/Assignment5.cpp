//  Kiarash Hesampour CS216
// 

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

template <class T>
void rotateLeft(vector <T>& v);
template <class T>
void output(vector <T> v);

int main(){
  cout << "vector of integers:" << endl;
  vector<int> integers;
  integers.push_back(1);      // pushing ints into vector
  integers.push_back(3);
  integers.push_back(5);
  integers.push_back(7);
  output(integers);           // output integers
  rotateLeft(integers);       // rotate left integers
  output(integers);           // output integers after rotation
  rotateLeft(integers);       // rotate left integers
  output(integers);           // output integers after rotation
  rotateLeft(integers);       // rotate left integers
  output(integers);           // output integers after rotation
  cout << endl;

  cout << "vector of chars:" << endl;
  vector<char> chars;
  chars.push_back('a');       // pushing chars into vector
  chars.push_back('b');
  chars.push_back('c');
  chars.push_back('d');
  chars.push_back('e');
  output(chars);              // output chars
  rotateLeft(chars);          // rotate left chars
  output(chars);              // output chars after rotation
  rotateLeft(chars);          // rotate left chars          
  output(chars);              // output chars after rotation
  rotateLeft(chars);          // rotate left chars
  output(chars);              // output chars after rotation
  cout << endl;

  cout << "vector of doubles:" << endl;
  vector<double> doubles;     
  doubles.push_back(1.5);     // pushing doubles into vector
  doubles.push_back(55.99);
  doubles.push_back(74.3);
  doubles.push_back(20.99);
  doubles.push_back(1.33);
  output(doubles);            // output doubles
  rotateLeft(doubles);        // rotate left doubles
  output(doubles);            // output doubles after rotation
  rotateLeft(doubles);        // rotate left doubles
  output(doubles);            // output doubles after rotation
  rotateLeft(doubles);        // rotate left doubles
  output(doubles);            // output doubles after rotation
  cout << endl;

  cout << "vector of strings:" << endl;
  vector<string> strings;       
  strings.push_back("apple");   // push strings into vector
  strings.push_back("orange");
  strings.push_back("cucumber");
  strings.push_back("lemon");
  output(strings);              // output strings
  rotateLeft(strings);          // rotate left strings
  output(strings);              // output strings after rotation
  rotateLeft(strings);          // rotate left strings
  output(strings);              // output strings after rotation              
  rotateLeft(strings);          // rotate left strings
  output(strings);              // output strings after rotation  
}



template <class T>
void rotateLeft(vector <T>& v){
  int size = v.size();    // getting size of vector
  if(size > 0){           // if size greater than 0
    T data=v[0];          // get first element
    v.erase(v.begin());   // remove first element
    v.push_back(data);    // push first element to the end
  }
}

template <class T>
void output(vector <T> v){
  for(int i = 0 ; i < v.size() ; i++){
    cout << v[i] << " ";
  }
  cout << endl;
}