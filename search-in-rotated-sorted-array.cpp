#include <iostream>
using namespace std;

int main()
{
    int target = 9;
    int size;
    int temp;

    cout << "Enter the size of the array: ";
    cin >> size;

    int myarray[size];

    cout << "Enter the elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> myarray[i];
    }

    // Sorting the array
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

    cout << "\nSorted Array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << myarray[i] << " ";
    }

    // Rotate the array
    int k;
    cout << "\n\nEnter the rotation value: ";
    cin >> k;

    k = k % size;

    int rotated[size];

    for (int i = 0; i < size; i++)
    {
        rotated[(i + k) % size] = myarray[i];
    }

    cout << "\nRotated Array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << rotated[i] << " ";
    }

    // Search for target
    int flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (rotated[i] == target)
        {
            cout << "\n\nTarget found at index: " << i << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "\n\nTarget not found." << endl;
    }

    return 0;
}