#include <stdio.h>

/**
 * main - this is the entry point of program
 *
 * Return: always 0
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
{
	putchar(x + '0');
	if (x < 9)
{
	putchar(',');
	putchar(' ');
}
	x++;
}
	putchar('\n');
	return (0);
}
