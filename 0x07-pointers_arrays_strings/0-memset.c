#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * memset - fill memory byte with a constant byte
 * @s: array
 * @b: value to be assigned
 * @n: total number of element in array
 * Return : 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
