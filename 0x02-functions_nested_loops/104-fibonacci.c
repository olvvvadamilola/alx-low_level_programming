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

	for (count = 2; count < 98; count++)
{
	next = a + b;

	if (next < a || next < b)
{
	break;
}

	printf(", %u", next);

	a = b;
	b = next;
}
	printf("\n");

	return (0);
}
