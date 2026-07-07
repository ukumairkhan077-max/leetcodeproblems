#include <iostream>
using namespace std;

int main() {
    int size;
    int value = 7;

    cout << "Enter size of an array: ";
    cin >> size;

    int myarray[size];

    cout << "Enter values for array:" << endl;

    for (int i = 0; i < size; i++) {
        cin >> myarray[i];
    }

    cout << "\nOriginal Array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << myarray[i] << " ";
    }

    // Remove all occurrences of value
    for (int i = 0; i < size; i++) {
        if (myarray[i] == value) {

            // Shift elements to the left
            for (int j = i; j < size - 1; j++) {
                myarray[j] = myarray[j + 1];
            }

            size--;   // Reduce logical size
            i--;      // Check the current index again
        }
    }

    cout << "\n\nArray after removing " << value << ":" << endl;

    for (int i = 0; i < size; i++) {
        cout << myarray[i] << " ";
    }

    return 0;
}