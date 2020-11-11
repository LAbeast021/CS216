//  Kiarash Hesampour CS216 
//  This Program will ask to user to enter one name for input file and one name for output file, then it will take the sentences in 
//      the input file and capitalize the first letter to upper case and all the others to lower case

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cctype>
using namespace std;

int main(){
    
    string input_fileName, output_fileName, input_sentence;

    ifstream infile;
    ofstream outfile;
    
    cout << "Please Enter The Input File Name : ";
    cin >> input_fileName;

    infile.open(input_fileName);      
    if(infile.fail()){
         cout << " An Error accurd while opening the input file (" << input_fileName << ") Please Try Again" << endl;
         return 1;
    }

    cout << "Please Enter The Output File Name : ";
    cin >> output_fileName;
    outfile.open(output_fileName);
    if(!outfile.is_open()){
        cout << " An Error accurd while opening the output file (" << output_fileName << ") Please Try Again" << endl;
        return 1;
    };  

    getline(infile,input_sentence);
    while(!infile.fail()){
        for(int i = 0 ; input_sentence[i] != '.' ; i++)
        if(isalpha(input_sentence[i]))
            if(i == 0)
                outfile.put(toupper(input_sentence[i]));
            else
                outfile.put(tolower(input_sentence[i]));
        else
            outfile.put(input_sentence[i]);
        outfile << ".\n";
        getline(infile,input_sentence);  
    } 

    outfile.close();
    infile.close();
    return 0;
}