#include <stdio.h>

void swap(int*, int*);

int main()
{
	int a = 2;
	int b = 5;
	
	printf("Before swapping values:\na: %i\nb: %i\n", a, b);

	swap(&a, &b);
	
	printf("After swapping values:\na: %i\nb: %i\n", a, b);

	return 0;
}

void swap(int* a, int* b)
{
	int tempVal;	// Allocate space in the stack for a temporary variable

	tempVal = *a;	// Store a's value by dereferencing, we use a temp var to assign over 'a' without losing its value
	*a = *b;	// Assign b's value to a
	*b = tempVal;	// Assign a's value to b
}
