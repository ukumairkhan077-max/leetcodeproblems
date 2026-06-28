#include <iostream>
using namespace std;

int main() {

    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int myarray[size];

    cout << "Enter elements:\n";

    for (int i = 0; i < size; i++) {
        cin >> myarray[i];
    }

    cout << "\nTriplets whose sum is 0:\n";

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {

                if (myarray[i] + myarray[j] + myarray[k] == 0) {

                    cout << myarray[i] << " "
                         << myarray[j] << " "
                         << myarray[k] << endl;
                }
            }
        }
    }

    return 0;
}