#include <iostream>
using namespace std;

int main()
{
    int size;
    int target = 8;

    cout << "Enter the size of the array: ";
    cin >> size;

    int myarray[size];

    cout << "Enter the elements:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> myarray[i];
    }

  
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (myarray[i] < myarray[j])
            {
                int temp = myarray[i];
                myarray[i] = myarray[j];
                myarray[j] = temp;
            }
        }
    }

    cout << "\nArray after sorting:\n";

    for (int i = 0; i < size; i++)
    {
        cout << myarray[i] << " ";
    }

    int start = -1;
    int end = -1;

    
    for (int i = 0; i < size; i++)
    {
        if (myarray[i] == target)
        {
            if (start == -1)
            {
                start = i;
            }

            end = i;
        }
    }

    if (start != -1)
    {
        cout << "\n\nTarget " << target << " found.\n";
        cout << "Starting Index = " << start << endl;
        cout << "Ending Index = " << end << endl;
    }
    else
    {
        cout << "\n\nTarget not found.";
    }

    return 0;
}