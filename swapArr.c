#include <stdio.h>
#define SIZE 10

void swapArr(int*);

int main()
{
	int arr[SIZE] =
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
	for (int i = 0; i < SIZE; i++)
	{
		printf("%i\n", arr[i]);
	}

	swapArr(arr);

	printf("\nValues of arr after swapArr() is called:\n");
        for (int i = 0; i < SIZE; i++)
        {
                printf("%i\n", arr[i]);
        }

	return 1;
}

void swapArr(int* arr)
{
	int tempVal = arr[0];
	arr[0] = arr[SIZE - 1];
	arr[SIZE - 1] = tempVal;
}
