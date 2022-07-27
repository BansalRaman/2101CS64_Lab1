// C program for insertion sort
#include <math.h>
#include <stdio.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
	int i, cur, j;
	for (i = 1; i < n; i++) {
		cur = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
		while (j >= 0 && arr[j] > cur) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = cur;
	}
}

// A function to print the array 
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/* Driver program to test insertion sort */
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

	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}
