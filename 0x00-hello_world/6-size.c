#include <stdio.h>

/**
 *main - main block
 *Return: 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu bytes(s)\n", sizeof (d)); 
	printf("Size of a int: %lu bytes(s)\n", sizeof (a));
	printf("Size of a long int: %lu bytes(s)\n", sizeof (b));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof (c));
	printf("Size of a float: %lu bytes(s)\n", sizeof (f));
	return (0)
}
