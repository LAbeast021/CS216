//  Kiarash Hesampour CS216
// This program will take an input file and will count how many of each letter in alphabet is in the text

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cctype>
using namespace std;


void charactersCalculator( char *, int *);
void englishLetterCalculator( int *, int *);

int main(){

   int charArray[128], englishLetterArray[26];
   char word[20];
   string fileName;
   ifstream infile;

   cout << "Please Enter The Input File Name : ";
   cin >> fileName;
   infile.open(fileName);      
    if(infile.fail()){
         cout << " An Error accurd while opening the input file (" << fileName << ") Please Try Again" << endl;
         return 1;
    }

   for (int i = 0; i < 128; i++)
      charArray[i] = 0;

   for (int j = 0; j < 26; j++)
      englishLetterArray[j] = 0;


   while (!infile.fail() && !infile.eof()){

      infile >> word;
      charactersCalculator(word, charArray);
   }  

   englishLetterCalculator(charArray, englishLetterArray);

   for (int i = 0; i < 26; i++){
      cout << (char)(i + 'A') << ": " << englishLetterArray[i] << endl;
   }  

   infile.close();
   return 0;
}

void charactersCalculator( char *word, int *charArray){
    char *current_char = word;
    while (*current_char){
      charArray[*current_char++] += 1;
    }  
}

void englishLetterCalculator( int *charArray, int *englishLetterArray){
   for (int i = 'A'; i <= 'Z'; i++){
      englishLetterArray[i - 'A'] += charArray[i];
    }  
   for (int i = 'a'; i <= 'z'; i++){
      englishLetterArray[i - 'a'] += charArray[i];
   }  
}
