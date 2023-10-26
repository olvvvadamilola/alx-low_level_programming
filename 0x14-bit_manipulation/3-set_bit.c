#include "main.h"
/**
 * set_bit - set the bit of a number
 * @n: number to be set
 * @index: index of the bit
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int _bit = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= _bit;

	return (1);
}
