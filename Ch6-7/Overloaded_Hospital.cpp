#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

double inPatientTotal (int,double, double, double);
double outPatientTotal (double, double);
bool inputValidation (int,int,double,double,double);

int main(){
    int patient_type, number_of_days;
    double daily_rate, service_charge, medication_charge, total_bill;
    bool input_validated;

    cout 
    << "Please enter the number that describes the patient type : " << endl
    << "1 : In_patient " << endl
    << "2 : out_patient " << endl;

    cin >> patient_type;
    if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Input error, Please Try again." << endl;
    }
    input_validated = inputValidation(patient_type,0, 0, 0, 0);
    while(!input_validated) {
        cout << " The option you entered is invalid please try again" << endl;
        cin  >> patient_type;
        input_validated = inputValidation(patient_type,0, 0, 0, 0);
    }

    if (patient_type == 1) {
        input_validated = false;
        while (!input_validated) {
            cout << "No value can be less than 0 " << endl;
            cout << "Please enter the number of days : " << endl;
            cin  >> number_of_days;
            cout << "Please enter the daily rate of the hospital : " << endl;
            cin  >> daily_rate;
            cout << "Please enter the cost of hospital service :" << endl;
            cin  >> service_charge;
            cout << "Please enter the cost of the medicine : " << endl;
            cin  >> medication_charge; 
            input_validated = inputValidation(patient_type, number_of_days,daily_rate,service_charge,medication_charge);
        }

        total_bill = inPatientTotal (number_of_days, daily_rate, service_charge, medication_charge);
    }
    else if (patient_type == 2) {
        input_validated = false;
        while (!input_validated) {
            cout << "No value can be less than 0 " << endl;
            cout << "Please enter the cost of hospital service :" << endl;
            cin  >> service_charge;
            cout << "Please enter the cost of the medicine : " << endl;
            cin  >> medication_charge; 
            input_validated = inputValidation(patient_type, number_of_days,daily_rate,service_charge,medication_charge);
        }
        total_bill = outPatientTotal (service_charge, medication_charge);

    }
    cout << "---------------------------------------------------" << endl;
    cout << "The total bill for this patient is $" << total_bill << endl;
    cout << "---------------------------------------------------" << endl;
    return 0;
};

bool inputValidation (int patient_type,int days , double daily_rate, double service, double medicine ){
    if (patient_type < 1 || patient_type > 2) {
        return false;
    }
    else if (service < 0 || medicine < 0 || daily_rate < 0 || days < 0) {
        return false;
    }
    else {
        return true;
    }
}
double inPatientTotal (int days,double daily_rate, double service, double medication){
    double total = days * daily_rate;
    total += service;
    total += medication;
    return total;
}
double outPatientTotal ( double service, double medication){
    double total = 0;
    total += service;
    total += medication;
    return total;
}