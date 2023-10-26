#include "main.h"
/**
 *  print_binary - prints binary representation of an unsigned long int
 * @n: number to be converted
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	unsigned long int current = 1;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}


	while ((n & (current << shift)) == 0)
	{
		shift--;
	}

	for (i = shift; i >= 0; i--)
	{
		_putchar((n & (current << i)) ? '1' : '0');
	}
}
