#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    double result = sqrt(number);
    cout << "Using sqrt(): " << result << endl;

    cout << "Without built-in function:\n";

    bool found = false;

    for(int i = 1; i <= number; i++) {
        if(i * i == number) {
            cout << "Number is a perfect square." << endl;
            cout << "Square root = " << i << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Number is not a perfect square." << endl;
    }

    return 0;
}