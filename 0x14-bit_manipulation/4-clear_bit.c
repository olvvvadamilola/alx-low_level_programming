#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 1
 * @n:nmber to be set
 * @index: index
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int bitm = ~1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= bitm;

	return (1);
}
