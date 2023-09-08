#include <stdio.h>

/**
 * main - this is the entry point of program
 *
 * Return: always 0
 */
int main(void)
{
	char alphbt;

	for (alphbt = 'z'; alphbt >= 'a'; alphbt--)
{
	putchar(alphbt);
}
	putchar('\n');
	return (0);
}
