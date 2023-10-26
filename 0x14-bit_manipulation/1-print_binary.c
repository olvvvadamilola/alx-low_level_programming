#include "main.h"
/**
 * print_binary - prints binary representation of an unsigned long int
 * @n: unsigned long int to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int current = 1;
	int i;
	int l_shift = sizeof(unsigned long int) * 8 - 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((n & (current << l_shift)) == 0)
	{
		l_shift--;
	}
	for (i = 0; i <= l_shift; i++)
	{
		_putchar((n & (current << l_shift)) ? '1' : '0');
	}
}
