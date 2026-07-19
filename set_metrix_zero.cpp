#include <iostream>
using namespace std;

int main() {
    int myarray[3][3];
    int row[3] = {0};    // Marks rows to be zeroed
    int col[3] = {0};    // Marks columns to be zeroed

    cout << "Enter the 3x3 matrix:\n";

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> myarray[i][j];
        }
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (myarray[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

   
    for (int i = 0; i < 3; i++) {
        if (row[i] == 1) {
            for (int j = 0; j < 3; j++) {
                myarray[i][j] = 0;
            }
        }
    }

    
    for (int j = 0; j < 3; j++) {
        if (col[j] == 1) {
            for (int i = 0; i < 3; i++) {
                myarray[i][j] = 0;
            }
        }
    }

  
    cout << "\nMatrix after setting rows and columns to zero:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << myarray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}