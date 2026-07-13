#include <iostream>
using namespace std;

int main() {

    int size;

    cout << "Enter size of an array: ";
    cin >> size;

    int myarray[size] = {};

    cout << "Enter elements:\n";

    for(int i = 0; i < size; i++){
        cin >> myarray[i];
    }

    cout << "Original Array:\n";

    for(int i = 0; i < size; i++){
        cout << myarray[i] << " ";
    }

   
    myarray[size - 1]++;

    cout << "\nAfter incrementing last element:\n";

    for(int i = 0; i < size; i++){
        cout << myarray[i] << " ";
    }

    return 0;
}