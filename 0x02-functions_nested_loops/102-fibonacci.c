#include <stdio.h>

/**
* main - Entry point of program
* to print first 50 fibonacci numbers, starting with 1 and 2
*
* Return: 0
*/
int main(void)
{
	int i;
	long a = 1;
	long b = 2;
	long fibonacci[50];

	fibonacci[0] = a;
	fibonacci[1] = b;

	for (i = 2; i < 50; i++)
{
	fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
}
	for (i = 0; i < 49; i++)
{
	printf("%ld, ", fibonacci[i]);
}
	printf("%ld\n", fibonacci[49]);

	return (0);
}
