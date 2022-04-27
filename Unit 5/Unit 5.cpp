#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int*, int*);

int* getNumbers(int);

int main() {
    
    int arraySize;
    cout << "How many integers would you like to declare: ";
    cin >> arraySize;

    
    int* array;
    array = getNumbers(arraySize); 
    
    cout << "Original array" << endl;
    for (int count = 0; count < arraySize; count++) {
        cout << *(array + count) << " ";
    }
   
    for (int i = 0; i < arraySize; i++) {
        for (int j = 0; j < (arraySize - 1); j++) {
            if (array[j] > array[j + 1]) {
                
                swap(&array[j + 1], &array[j]); 
                
            }
        }
    }
   
    cout << "\nSorted Array" << endl;
    for (int count = 0; count < arraySize; count++) {
        cout << *(array + count) << " ";
    }
    return 0;
}

void swap(int* num1, int* num2) {
    
    int tempNum;
    tempNum = *num1;
    *num1 = *num2;  
    *num2 = tempNum;    
}

int* getNumbers(int size) {
    int* array;

    array = new int[size];

    srand(time(0));

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }
    return array;
}