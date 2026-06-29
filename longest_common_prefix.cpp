#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    string myarray[n];

    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> myarray[i];
    }

    char current;
    string answer = "";

    for (int i = 0; i < myarray[0].length(); i++)
    {
        int count = 0;
        current = myarray[0][i];

        for (int j = 1; j < n; j++)
        {
            if (i < myarray[j].length() && current == myarray[j][i])
            {
                count++;
            }
            else
            {
                break;
            }
        }

        if (count == n - 1)
        {
            answer += current;
        }
        else
        {
            break;
        }
    }

    cout << "Longest Common Prefix: " << answer << endl;

    return 0;
}