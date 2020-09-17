#include <iostream>
#include <fstream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
   string lnA, fnA;
   double salA, payA, SalaryA;

   string lnB, fnB;
   double salB, payB, SalaryB;

   string lnC, fnC;
   double salC, payC, SalaryC;

   ifstream inFile;
   ofstream outFile;
   inFile.open("SalaryData.txt");
   outFile.open("SalaryOutput.dat");
   outFile << setprecision(2) << showpoint << fixed;

   inFile >> lnA >> fnA >> salA >> payA;
   inFile >> lnB >> fnB >> salB >> payB;
   inFile >> lnC >> fnC >> salC >> payC;
      
   SalaryA = salA + ((salA * payA) / 100);
   SalaryB = salB + ((salB * payB) / 100);
   SalaryC = salC + ((salC * payC) / 100);

   outFile << fnA << " " << lnA << " " << SalaryA << endl;
   outFile << fnB << " " << lnB << " " << SalaryB << endl;
   outFile << fnC << " " << lnC << " " << SalaryC << endl;

   inFile.close();
   outFile.close();

   return 0;
}