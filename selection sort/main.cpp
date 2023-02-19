#include <iostream>
using namespace std;

// Selection Sort Function
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(arr[min_idx], arr[i]);
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver program to test above functions
int main()
{
    int arr[] = {6, 21, 22, 20, 11, 12, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Unsorted array: \n";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "\nSorted array: \n";
    printArray(arr, n);

    return 0;
}
