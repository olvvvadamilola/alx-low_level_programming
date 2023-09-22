#include <stdio.h>
#include "main.h"
/**
 * rot13 - Rotate alphabet 13 places.
 * @a: integer
 * Return: 0
 */
char *rot13(char *a)
{
	char *p = a;

	for (; *p; p++)
	{
		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
		{
			char base = (*p >= 'a' && *p <= 'z') ? 'a' : 'A';
			*p = (((*p - base + 13) % 26) + base);
		}
	}
	return (a);
}
