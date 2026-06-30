#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int myarray[] = {1, 0, -1, 4, 5, 6};
    int target = 0;
    int n = 6;

    int closestSum = myarray[0] + myarray[1] + myarray[2];

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {

                int currentSum = myarray[i] + myarray[j] + myarray[k];

                // Print the current triplet and its sum
                cout << "(" << myarray[i] << ", "
                     << myarray[j] << ", "
                     << myarray[k] << ")"
                     << " -> Sum = " << currentSum << endl;

                if(abs(currentSum - target) < abs(closestSum - target)) {
                    closestSum = currentSum;
                }
            }
        }
    }

    cout << "\nClosest Sum = " << closestSum << endl;

    return 0;
}