#include <stdio.h>

int main()
{
	int var      = 5;
	int* p       = &var;
	int** ptp    = &p;	// Points to 'p'
	int* sharedp = p;	// Does NOT point to 'p'. It shares 'p's address

	printf("%i%c", **ptp, '\n');

	return 0;
}
