#include <stdio.h>

/**
 * main - this is the entry point of program
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
{
	putchar(num + '0');
}
	putchar('\n');
	return (0);
}
