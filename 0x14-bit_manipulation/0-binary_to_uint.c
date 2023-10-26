#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: pointer to binary number
 * Return: unsigned integer or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		convert = convert * 2 + (b[i] - '0');
	}
	return (convert);
}
