#include <iostream>
using namespace std;

int main()
{
    int size;
    int temp;
    int target;

    cout << "Enter the size of the array: ";
    cin >> size;

    int myarray[size];

    cout << "Enter the elements:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> myarray[i];
    }

    cout << "Enter the target: ";
    cin >> target;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (myarray[i] > myarray[j])
            {
                temp = myarray[i];
                myarray[i] = myarray[j];
                myarray[j] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << myarray[i] << " ";
    }

    cout << endl;

    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (myarray[i] == target)
        {
            cout << "Target found at index: " << i << endl;
            found = true;
            break;
        }

        if (i < size - 1 && myarray[i] < target && myarray[i + 1] > target)
        {
            cout << "Target should be inserted at index: " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        if (target < myarray[0])
        {
            cout << "Target should be inserted at index: 0" << endl;
        }
        else if (target > myarray[size - 1])
        {
            cout << "Target should be inserted at index: " << size << endl;
        }
    }

    return 0;
}