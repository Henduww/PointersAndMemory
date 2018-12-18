#include <stdio.h>

void changeVal(int*);

int main()
{
	int val = 5;
	int* ptVal = &val;

	printf("Initial value of val: %i\n", val);

	changeVal(&val);
	printf("Value of val after being passed by reference: %i\n", val);

	changeVal(ptVal);
	printf("Value of val after passing the designated pointer: %i\n", val);

	return 0;
}

void changeVal(int* refVal)
{
	*refVal += 1;
}
