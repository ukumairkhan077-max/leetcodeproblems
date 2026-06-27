v#include <iostream>
using namespace std;

int main() {

    string str;

    cout << "Enter a string: ";
    cin >> str;

    int maxLength = 0;

    for (int i = 0; str[i] != '\0'; i++) {

        bool visited[256] = {false};
        int currentLength = 0;

        for (int j = i; str[j] != '\0'; j++) {

            if (visited[str[j]]) {
                break;
            }

            visited[str[j]] = true;
            currentLength++;
        }

        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    cout << "Longest substring length = " << maxLength << endl;

    return 0;
}