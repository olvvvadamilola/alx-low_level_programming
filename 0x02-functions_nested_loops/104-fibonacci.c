#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
	unsigned int a = 1, b = 2, next;
	int count;


/* Print the first two Fibonacci numbers */
	printf("%u, %u", a, b);

	for (count =2; count < 100; count++)
{
	next = a + b;
	a = b;
	b = next;

	printf(", %u", next);
}

	printf("\n");

	return (0);
}
