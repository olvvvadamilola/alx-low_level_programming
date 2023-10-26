#include "main.h"
/**
 * get_bit - get the bit of a number
 * @n: number to be checked
 * @index: index of the bit
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int shift;
	int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	shift = 1UL << index;
	i = n & shift;

	if (i)
		return (1);

	else
		return (0);
}
