#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the arrays: ";
    cin >> size;

    int array1[size];
    int array2[size];

   
    cout << "\nEnter elements of first array:\n";
    for (int i = 0; i < size; i++) {
        cin >> array1[i];
    }

    
    cout << "\nEnter elements of second array:\n";
    for (int i = 0; i < size; i++) {
        cin >> array2[i];
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array1[i] > array1[j]) {
                swap(array1[i], array1[j]);
            }
        }
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array2[i] > array2[j]) {
                swap(array2[i], array2[j]);
            }
        }
    }

    
    cout << "\nSorted first array: ";
    for (int i = 0; i < size; i++) {
        cout << array1[i] << " ";
    }

    cout << "\nSorted second array: ";
    for (int i = 0; i < size; i++) {
        cout << array2[i] << " ";
    }

    
    double median1;
    if (size % 2 == 0) {
        median1 = (array1[size / 2 - 1] + array1[size / 2]) / 2.0;
    } else {
        median1 = array1[size / 2];
    }

    
    double median2;
    if (size % 2 == 0) {
        median2 = (array2[size / 2 - 1] + array2[size / 2]) / 2.0;
    } else {
        median2 = array2[size / 2];
    }

    cout << "\n\nMedian of first array = " << median1;
    cout << "\nMedian of second array = " << median2 << endl;

    return 0;
}