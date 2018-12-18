#include <stdio.h>

int main(int argc, char** argv)
{
	int a;

	a = 5;

	int* pa = &a;

	printf("%d\n", *pa);
}
