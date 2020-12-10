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
  integers.push_back(1);      
  integers.push_back(3);
  integers.push_back(5);
  integers.push_back(7);
  output(integers);           
  rotateLeft(integers);       
  output(integers);           
  rotateLeft(integers);       
  output(integers);           
  rotateLeft(integers);       
  output(integers);           
  cout << endl;

  cout << "vector of chars:" << endl;
  vector<char> chars;
  chars.push_back('a');       
  chars.push_back('b');
  chars.push_back('c');
  chars.push_back('d');
  chars.push_back('e');
  output(chars);              
  rotateLeft(chars);          
  output(chars);              
  rotateLeft(chars);                    
  output(chars);              
  rotateLeft(chars);          
  output(chars);              
  cout << endl;

  cout << "vector of doubles:" << endl;
  vector<double> doubles;     
  doubles.push_back(2.5);     
  doubles.push_back(23.90);
  doubles.push_back(64.3);
  doubles.push_back(18.90);
  doubles.push_back(10.35);
  output(doubles);            
  rotateLeft(doubles);        
  output(doubles);            
  rotateLeft(doubles);        
  output(doubles);            
  rotateLeft(doubles);        
  output(doubles);            
  cout << endl;

  cout << "vector of strings:" << endl;
  vector<string> strings;       
  strings.push_back("hello");   
  strings.push_back("hi");
  strings.push_back("computer");
  strings.push_back("apple");
  output(strings);              
  rotateLeft(strings);          
  output(strings);            
  rotateLeft(strings);          
  output(strings);                          
  rotateLeft(strings);          
  output(strings);              
}



template <class T>
void rotateLeft(vector <T>& v){
  int size = v.size();    
  if(size > 0){           
    T data=v[0];          
    v.erase(v.begin());   
    v.push_back(data);    
  }
}

template <class T>
void output(vector <T> v){
  for(int i = 0 ; i < v.size() ; i++){
    cout << v[i] << " ";
  }
  cout << endl;
}