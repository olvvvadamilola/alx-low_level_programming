#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a = 1, b = 2;
	int count = 0;


/* Print the first two Fibonacci numbers */
	printf("%d, %d", a, b);

	while (count < 96)
{
	int next = a + b;

	printf(", %d", next);
	a = b;
	b = next;
	count++;
}
	printf("\n");

	return (0);
}
