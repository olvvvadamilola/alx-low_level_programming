#include <stdio.h>

/**
 * main - this is the entry point of the program
 *
 * Return: always 0
*/
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
{
	for (b = a + 1; b < 10; b++)
{
	putchar(a + '0');
	putchar(b + '0');

	if (a != 8 || b != 9)
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');

	return (0);
}
