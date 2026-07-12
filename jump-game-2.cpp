#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int nums[size];

    cout << "Enter the elements:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (i + nums[i] > farthest)
        {
            farthest = i + nums[i];
        }

        if (i == currentEnd)
        {
            jumps++;
            currentEnd = farthest;
        }
    }

    cout << "Minimum jumps = " << jumps << endl;

    return 0;
}