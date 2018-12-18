#include <stdio.h>
#include <stdlib.h>

void HeapAlloc();

int main()
{
	HeapAlloc();
	return 1;
}

void HeapAlloc()
{
	int* pt;			// Allocate size for an int pointer

	pt = malloc(sizeof(int));	// Assign new block of memory from the heap to pointer
	*pt = 42;			// Assign value to memory block by dereferencing pointer

	printf("The value in the memory block at: %p is: %i\n", pt, *pt);
	free(pt);			// Free memory in the heap, block is now available for future use
	pt = NULL;			// Assign NULL to pointer, to make sure it is not used again and do not cause any unexpected behaviour in the case that it is used
}
