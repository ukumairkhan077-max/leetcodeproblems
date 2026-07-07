#include <iostream>
#include <string>
using namespace std;

int main() {
    string first = "sadlovesad";
    string second = "sad";

    size_t index = first.find(second);

    while (index != string::npos) {
        cout << "Found at index: " << index << endl;

        // Start searching after this match
        index = first.find(second, index + 1);
    }

    return 0;
}