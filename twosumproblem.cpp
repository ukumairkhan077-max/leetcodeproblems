#include <iostream>
using namespace std;

int main() {
    int myarray[] = {1,3,5,6,7,8,9};
    int target = 9;

    int n = sizeof(myarray) / sizeof(myarray[0]);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(myarray[i] + myarray[j] == target) {
                cout << "Indices are: " << i << " " << j << endl;
            }
        }
    }

    return 0;
}