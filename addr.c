#include <stdio.h>

void passedByValAddr(int);
void passedByRefAddr(int*);

int main()
{
	int val = 5;

	printf("Address of val in main(): %p\n", &val);

	passedByValAddr(val);
	passedByRefAddr(&val);

	return 0;
}

void passedByValAddr(int val)
{
	printf("Address of val in passedByValAddr(): %p\n", &val);
}

void passedByRefAddr(int* val)
{
	printf("Address of val in passedByRefAddr(): %p\n", val);
}
