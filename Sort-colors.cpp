#include <iostream>
using namespace std;

void sortcolor(int myarray[5]) {

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {

            if (myarray[i] > myarray[j]) {
                int temp = myarray[i];
                myarray[i] = myarray[j];
                myarray[j] = temp;
            }

        }
    }
}

int main() {

    int myarray[5];

    cout << "Enter 5 values:\n";

   for (int i = 0; i < 5; i++) {

    cin >> myarray[i];

    while (myarray[i] > 2 || myarray[i] < 0) {
        cout << "Invalid value! Enter only 0, 1, or 2: ";
        cin >> myarray[i];
    }
}

    sortcolor(myarray);

    cout << "Sorted Array:\n";

    for (int i = 0; i < 5; i++) {
        cout << myarray[i] << " ";
    }

    return 0;
}