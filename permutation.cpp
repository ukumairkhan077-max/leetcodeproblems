#include <iostream>
using namespace std;

void permutation(int arr[], int index, int size)
{
    // Base case
    if (index == size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    
    for (int i = index; i < size; i++)
    {
       
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;

        permutation(arr, index + 1, size);

        
        temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "\nAll Possible Permutations:\n";

    permutation(arr, 0, size);

    return 0;
}