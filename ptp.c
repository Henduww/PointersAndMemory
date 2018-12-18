#include <stdio.h>

int main()
{
	int var   = 	5;
	int* p    =	&var;
	int** ptp = 	&p;

	printf("%i%c", **ptp, '\n');

	return 0;
}
