#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* CopyStringToHeap(const char*);

int main()
{
	char* heapStr;

	heapStr = CopyStringToHeap("Hello, Heap");

	printf("The string: %s is located at %p\n", heapStr, heapStr);
	free(heapStr);					// Deallocate block of memory!!

	return 0;
}

char* CopyStringToHeap(const char* string)
{
	char* newStringAddr;
	int len;
	
	len = strlen(string + 1);			// Get length required to store array
	newStringAddr = malloc(sizeof(char) * len);	// Assign address of newly allocated memory block in the heap
	assert(newStringAddr != NULL);			// Check that heap is not full
	strcpy(newStringAddr, string);			// Copy string address to heap memory block

	return newStringAddr;				// Return address of string in the heap
}
