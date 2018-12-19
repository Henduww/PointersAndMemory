#include <stdio.h>
#define SIZE 10

void swapArr(int*);

int main()
{
	int arr[SIZE] =			// Initialize int array
	{
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		10
	};	

	printf("Values of arr before swapArr() is called:\n");
	for (int i = 0; i < SIZE; i++)	// Display every element in arr in the console
	{
		printf("%i\n", arr[i]);
	}

	swapArr(arr);

	printf("\nValues of arr after swapArr() is called:\n");
        for (int i = 0; i < SIZE; i++)	// Display every element in arr in the console
        {
                printf("%i\n", arr[i]);
        }

	return 0;
}

void swapArr(int* arr)
{
	int tempVal;			// Allocate space in the stack for a temporary variable
	
	tempVal = arr[0];		// Assign arr's first element to the temporary variable
	arr[0] = arr[SIZE - 1];		// Assign arr's last element to the first element
	arr[SIZE - 1] = tempVal;	// Assign arr's first element to the last element
}
