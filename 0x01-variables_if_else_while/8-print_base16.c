#include <stdio.h>

/**
 * main - this is the entry point of program
 *
 * Return: always 0
 */
int main(void)
{
	char digit;
	char alphbt;

	for (digit = '0'; digit <= '9'; digit++)
{
	putchar(digit);
}

	for (alphbt = 'a'; alphbt <= 'f'; alphbt++)
{
	putchar(alphbt);
}
	putchar('\n');
	return (0);
}
