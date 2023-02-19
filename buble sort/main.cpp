#include <iostream>
using namespace std;

// Function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	// Base case
	if (n == 1)
		return;

	// One pass of bubble sort. After
	// this pass, the largest element
	// is moved (or bubbled) to end.
	for (int i=0; i<n-1; i++)
		if (arr[i] > arr[i+1])
			swap(arr[i], arr[i+1]);

	// Largest element is fixed,
	// recur for remaining array
	bubbleSort(arr, n-1);
}

// Function to print an array
void printArray(int arr[], int size)
{
	for (int i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
	int arr[] = {34, 24, 65, 2, 82, 11, 50};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Unsorted array: \n";
	printArray(arr, n);

	bubbleSort(arr, n);

	cout << "\nSorted array: \n";
	printArray(arr, n);
	return 0;
}
