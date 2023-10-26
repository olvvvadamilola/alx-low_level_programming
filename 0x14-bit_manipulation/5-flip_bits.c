#include "main.h"

/**
 * flip_bits - flip bits in a number
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 * Return: The number of bits flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bitloc = (sizeof(unsigned long int) * 8) - 1;
	unsigned int count = 0;
	unsigned long int act = n ^ m;

	while (bitloc >= 0)
	{
		unsigned long int current = act >> bitloc;

		if (current & 1)
			count++;

		bitloc--;
	}

	return (count);
}
