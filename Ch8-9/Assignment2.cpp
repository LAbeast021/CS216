//  Kiarash Hesampour CS216 

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

//function prototypes
void displayArray(int [], int);
void bubbleSortArray(int [], int);
void ascendingOrderSort(int [], int);
//main funtion
int main(){
    //two identical arrays
    int arra1[] = {10,56,-34,67,222,987,-1,8},
        arra2[] = {10,56,-34,67,222,987,-1,8},
        array_size = 8;
    //displayArrays first array
    cout << "First Array: \n";
    displayArray(arra1, array_size);
    cout << endl;
    //performing bubble sort on first array
    cout << "Bubble Sort: "<<endl;
    bubbleSortArray(arra1, array_size);
    //displayArrays second array
    cout << "\nSecond Array: \n";
    displayArray(arra2, array_size);
    cout << endl;
    //performing selection sort on second array
    cout << "Selection Sort: "<<endl;
    ascendingOrderSort(arra2, array_size);
    cout << endl;
    return 0;
} //end of main
//function to displayArray the array elements
void displayArray(int array[], int ARRAY_SIZE ){
    cout << "Array = [" ;
    for(int i = 0; i < ARRAY_SIZE; i++){
        cout << array[i] << "  ," ;
    }
    cout << " ]" << endl;
}
//function performs bubblesortArray on given array
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
//this function performs selection sort on given array
void ascendingOrderSort(int array[], int ARRAY_SIZE){
    for(int i = 0;i < ARRAY_SIZE-1; i++){
        for( int j = i+1; j < ARRAY_SIZE; j++)
            if(array[i] > array[j]){
            //swapping of arrray elements
            int tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
            //displayArrays pass elements
            displayArray(array, ARRAY_SIZE);
        }
    }
}