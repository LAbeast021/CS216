//  Kiarash Hesampour CS216 
// This Program  uses two identical arrays of eight integers it display the contents of the ﬁrst array, then call a function to sort it using an ascending order bubble sort, modiﬁed to print out the array contents after each pass of the sort
// then it display the contents of the second array, then call a function to sort it using an ascending order selection sort, modiﬁed to print out the array contents after each pass of the sort.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

void displayArray(int [], int);
void bubbleSortArray(int [], int);
void ascendingOrderSort(int [], int);

int main(){

    int array_1[] = {10,56,-34,67,222,987,-1,8},
        array_2[] = {10,56,-34,67,222,987,-1,8},
        array_size = 8;
    cout << "\nFirst " ;
    displayArray(array_1, array_size);

    cout << "\nBubble Sorting first array : " << endl;
    cout << "-------------------------------------------------" << endl;
    bubbleSortArray(array_1, array_size);
   
    cout << "\nSecond ";
    displayArray(array_2, array_size);
    
    cout << "\nSelection Sorting second array : " << endl;
    cout << "-------------------------------------------------" << endl;

    ascendingOrderSort(array_2, array_size);
    return 0;
}

void displayArray(int array[], int ARRAY_SIZE ){
    cout << "Array = [" ;
    for(int i = 0; i < ARRAY_SIZE; i++){
        cout << array[i] << " ," ;
    }
    cout << " ]" << endl;
}

void bubbleSortArray(int array[], int ARRAY_SIZE){
    bool change;
    int temp;
    do{
        change = false;
        for(int i = 0; i < ARRAY_SIZE - 1; i++){
            if(array[i] > array[i+1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                change = true;
            }
        }
        displayArray(array, ARRAY_SIZE);
    } while(change);
}

void ascendingOrderSort(int array[], int ARRAY_SIZE){
    for(int i = 0;i < ARRAY_SIZE-1; i++){
        for( int j = i+1; j < ARRAY_SIZE; j++)
            if(array[i] > array[j]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
                displayArray(array, ARRAY_SIZE);
            }
    }
}