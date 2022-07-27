// C program for implementation of Bubble sort
#include <stdio.h>

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

// A function for implimentation of bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++){

		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

// Function to print array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{
// Taking input from user

	printf("Enter Size of array:\n");
	int n;
	scanf("%d",&n);
	printf("Enter Array:\n");
	int arr[n];

	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
