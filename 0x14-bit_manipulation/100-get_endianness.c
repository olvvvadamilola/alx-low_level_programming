#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 0 for big-endian, 1 for little-endian.
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *p = (char *) &t;

	return (*p);
}
