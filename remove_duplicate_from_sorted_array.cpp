#include<iostream>
using namespace std;

int main()
{
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    int myarray[size];

    cout<<"Enter elements:\n";

    for(int i=0;i<size;i++)
    {
        cin>>myarray[i];
    }

    // Selection Sort (Ascending)
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(myarray[i] > myarray[j])
            {
                int temp = myarray[i];
                myarray[i] = myarray[j];
                myarray[j] = temp;
            }
        }
    }

    cout<<"\nSorted Array:\n";

    for(int i=0;i<size;i++)
    {
        cout<<myarray[i]<<" ";
    }

    cout<<"Now we have to remove the duplicate from this sorted array ";
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (myarray[i] == myarray[j]) {

            // Shift elements left
            for (int k = j; k < size - 1; k++) {
                myarray[k] = myarray[k + 1];
            }

            size--;
            j--;   // Don't skip the new element at index j
        }
    }
}
     for(int i=0;i<size;i++)
    {
        cout<<myarray[i]<<" ";
    }

    
}