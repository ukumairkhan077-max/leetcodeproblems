#include <iostream>
using namespace std;

int main() {
    int number;
    int original_number;
    int reverse_number = 0;
    int remainder;

    cout << "Enter a number to check palindrome or not: ";
    cin >> number;

    original_number = number;

    while (number > 0) {
        remainder = number % 10;
        reverse_number = reverse_number * 10 + remainder;
        number = number / 10;
    }

    if (reverse_number == original_number) {
        cout << original_number << " is a palindrome." << endl;
    } else {
        cout << original_number << " is not a palindrome." << endl;
    }

    return 0;
}