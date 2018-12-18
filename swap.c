#include <stdio.h>

void swap(int*, int*);

int main()
{
	int a = 2;
	int b = 5;
	
	printf("Before swapping values:\na: %i\nb: %i\n", a, b);

	swap(&a, &b);
	
	printf("After swapping values:\na: %i\nb: %i\n", a, b);

	return 1;
}

void swap(int* a, int* b)
{
	int tempVal;

	tempVal = *a;
	*a = *b;
	*b = tempVal;
}
