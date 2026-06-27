#include <iostream>
using namespace std;

int main() {

    string str;

    cout << "Enter a string: ";
    cin >> str;

    int maxLength = 0;

    // Try every starting position
    for (int i = 0; str[i] != '\0'; i++) {

        // Keeps track of characters we've already seen
        bool visited[256] = {false};

        int currentLength = 0;

        // Extend the substring until a duplicate is found
        for (int j = i; str[j] != '\0'; j++) {

            if (visited[(unsigned char)str[j]]) {
                break;
            }

            visited[(unsigned char)str[j]] = true;
            currentLength++;
        }

        // Update the maximum length
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    cout << "Longest substring length = " << maxLength << endl;

    return 0;
}