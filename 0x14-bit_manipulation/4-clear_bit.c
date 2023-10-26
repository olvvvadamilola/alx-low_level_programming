#include "main.h"
/**
 * clear_bit - set bit to 0
 * @n: number
 * @index: index
 * Return: 0 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

