#include <iostream>
using namespace std;

int main() {
    int myarray[4][4];
    int target=8;

    cout << "Enter 16 elements:\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> myarray[i][j];
        }
    }

  
    for (int i = 0; i < 16 - 1; i++) {
        for (int j = i + 1; j < 16; j++) {

            int r1 = i / 4;
            int c1 = i % 4;

            int r2 = j / 4;
            int c2 = j % 4;

            if (myarray[r1][c1] > myarray[r2][c2]) {

                int temp = myarray[r1][c1];
                myarray[r1][c1] = myarray[r2][c2];
                myarray[r2][c2] = temp;
            }
        }
    }

  
    cout << "\nSorted Matrix:\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << myarray[i][j] << " ";
        }
        cout << endl;
    }
     bool found = false;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (myarray[i][j] == target) {
            found = true;
        }
    }
}

    if (found) {
        cout << "Target value is present" << endl;
    }
    else {
        cout << "Target value is not present" << endl;
}
   

    

    return 0;
}